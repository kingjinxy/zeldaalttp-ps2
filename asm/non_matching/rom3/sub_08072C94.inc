	THUMB_FUNC_START sub_08072C94
sub_08072C94: @ 0x08072C94
	push {r4,lr}
	ldr r3, _08072CBC  @ =gRam
	ldr r1, _08072CC0  @ =0x00000C02
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #3
	bne _08072CD0
	ldr r2, _08072CC4  @ =0x000009E8
	add r0, r3, r2
	mov r2, #0
	mov r1, #0
	strh r1, [r0]
	ldr r4, _08072CC8  @ =0x000009AD
	add r0, r3, r4
	strb r2, [r0]
	ldr r2, _08072CCC  @ =0x00000ABC
	add r0, r3, r2
	strh r1, [r0]
	b _08072CEC
	.byte 0x00
	.byte 0x00
_08072CBC:
	.4byte gRam
_08072CC0:
	.4byte 0x00000C02
_08072CC4:
	.4byte 0x000009E8
_08072CC8:
	.4byte 0x000009AD
_08072CCC:
	.4byte 0x00000ABC
_08072CD0:
	ldr r4, _08072CE4  @ =0x00000C04
	add r2, r3, r4
	ldrh r1, [r2]
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _08072CE8
	bl sub_080729E4
	b _08072CEC
_08072CE4:
	.4byte 0x00000C04
_08072CE8:
	add r0, r1, #1
	strh r0, [r2]
_08072CEC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08072C94

	.byte 0x00
	.byte 0x00
