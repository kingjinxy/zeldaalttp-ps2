	THUMB_FUNC_START sub_080AFEFC
sub_080AFEFC: @ 0x080AFEFC
	push {r4,r5,lr}
	ldr r4, _080AFF54  @ =gRam
	lsl r0, r0, #1
	ldr r1, _080AFF58  @ =0x0000097C
	add r5, r4, r1
	strb r0, [r5]
	ldr r0, _080AFF5C  @ =0x00001749
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AFF72
	ldr r1, _080AFF60  @ =0x00001748
	add r2, r4, r1
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldrb r1, [r2]
	ldr r0, _080AFF64  @ =gUnknown_0816E8C6
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r3]
	cmp r1, #4
	bne _080AFF72
	mov r0, #203
	lsl r0, r0, #5
	add r1, r4, r0
	mov r3, #0
	mov r0, #0
	strh r0, [r1]
	strb r3, [r2]
	ldr r1, _080AFF68  @ =0x00001A4B
	add r2, r4, r1
	ldrb r0, [r2]
	sub r0, r0, #1
	lsl r0, r0, #1
	mov r1, #0
	ldrsb r1, [r5, r1]
	cmp r0, r1
	bne _080AFF6C
	strb r3, [r2]
	b _080AFF72
_080AFF54:
	.4byte gRam
_080AFF58:
	.4byte 0x0000097C
_080AFF5C:
	.4byte 0x00001749
_080AFF60:
	.4byte 0x00001748
_080AFF64:
	.4byte gUnknown_0816E8C6
_080AFF68:
	.4byte 0x00001A4B
_080AFF6C:
	ldr r1, _080AFF78  @ =0x00001A4A
	add r0, r4, r1
	strb r3, [r0]
_080AFF72:
	pop {r4,r5}
	pop {r0}
	bx r0
_080AFF78:
	.4byte 0x00001A4A
	THUMB_FUNC_END sub_080AFEFC

