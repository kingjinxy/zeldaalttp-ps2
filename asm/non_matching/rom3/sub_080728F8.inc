	THUMB_FUNC_START sub_080728F8
sub_080728F8: @ 0x080728F8
	push {lr}
	ldr r3, _08072934  @ =gRam
	ldr r1, _08072938  @ =0x00000C02
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #3
	bne _08072920
	ldr r0, _0807293C  @ =0x00000C0C
	add r1, r3, r0
	mov r2, #0
	mov r0, #40
	strh r0, [r1]
	ldr r1, _08072940  @ =0x00000ABC
	add r0, r3, r1
	strh r2, [r0]
	ldr r0, _08072944  @ =0x000009AD
	add r1, r3, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08072920:
	ldr r0, _08072948  @ =0x00000C04
	add r1, r3, r0
	ldrh r2, [r1]
	mov r0, #3
	and r0, r0, r2
	cmp r0, #0
	bne _0807294C
	bl sub_080729E4
	b _08072950
_08072934:
	.4byte gRam
_08072938:
	.4byte 0x00000C02
_0807293C:
	.4byte 0x00000C0C
_08072940:
	.4byte 0x00000ABC
_08072944:
	.4byte 0x000009AD
_08072948:
	.4byte 0x00000C04
_0807294C:
	add r0, r2, #1
	strh r0, [r1]
_08072950:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080728F8

