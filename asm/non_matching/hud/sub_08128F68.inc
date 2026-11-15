	THUMB_FUNC_START sub_08128F68
sub_08128F68: @ 0x08128F68
	push {lr}
	ldr r1, _08128F8C  @ =gRam
	ldr r0, _08128F90  @ =0x00001AD2
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldrh r0, [r1]
	ldr r1, _08128F94  @ =gTextPointer
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08128F98
	mov r0, #64
	mov r1, #0
	bl sub_0812A324
	b _08128FA0
_08128F8C:
	.4byte gRam
_08128F90:
	.4byte 0x00001AD2
_08128F94:
	.4byte gTextPointer
_08128F98:
	mov r0, #71
	mov r1, #0
	bl sub_0812A324
_08128FA0:
	ldr r1, _08128FB4  @ =gRam
	ldr r0, _08128FB8  @ =0x00001AD2
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r0, #0
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08128FB4:
	.4byte gRam
_08128FB8:
	.4byte 0x00001AD2
	THUMB_FUNC_END sub_08128F68

