	THUMB_FUNC_START sub_08022C24
sub_08022C24: @ 0x08022C24
	push {r4,r5,lr}
	add r4, r0, #0
	mov r5, #0
	mov r0, #50
	ldrsh r1, [r4, r0]
	ldr r0, _08022C3C  @ =0x00000197
	cmp r1, r0
	bgt _08022C40
	add r0, r0, #1
	strh r0, [r4, #50]
	b _08022C6C
	.byte 0x00
	.byte 0x00
_08022C3C:
	.4byte 0x00000197
_08022C40:
	mov r0, #148
	lsl r0, r0, #2
	cmp r1, r0
	ble _08022C6E
	ldrb r1, [r4, #11]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _08022C5E
	ldr r0, [r4, #56]
	cmp r0, #0
	bne _08022C5E
	add r0, r4, #0
	bl sub_08022A7C
_08022C5E:
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r1, #166
	lsl r1, r1, #2
	cmp r0, r1
	ble _08022C6E
	strh r1, [r4, #50]
_08022C6C:
	mov r5, #1
_08022C6E:
	mov r0, #54
	ldrsh r1, [r4, r0]
	ldr r0, _08022C84  @ =0x000001A7
	cmp r1, r0
	bgt _08022C88
	add r0, r0, #1
	strh r0, [r4, #54]
	mov r0, #2
	orr r5, r5, r0
	b _08022C9A
	.byte 0x00
	.byte 0x00
_08022C84:
	.4byte 0x000001A7
_08022C88:
	mov r0, #146
	lsl r0, r0, #2
	cmp r1, r0
	ble _08022C9A
	strh r0, [r4, #54]
	mov r0, #2
	orr r5, r5, r0
	lsl r0, r5, #24
	lsr r5, r0, #24
_08022C9A:
	add r0, r5, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08022C24

	.byte 0x00
	.byte 0x00
