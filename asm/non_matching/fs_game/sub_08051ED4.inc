	THUMB_FUNC_START sub_08051ED4
sub_08051ED4: @ 0x08051ED4
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldr r1, _08051F30  @ =gUnknown_03000450
	ldrh r2, [r2, #54]
	ldrh r1, [r1, #34]
	sub r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #4
	mov r2, #0
	ldrsh r1, [r0, r2]
	cmp r1, #15
	bgt _08051F36
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #6
	bhi _08051F2E
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	add r1, r0, #5
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
_08051F2E:
	b _08051F8C
_08051F30:
	.4byte gUnknown_03000450
	.byte 0x0C
	.byte 0xE0
_08051F36:
	ldr r0, [r7]
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #40
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	cmp r1, #15
	bgt _08051F6E
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
_08051F6E:
	ldr r0, [r7]
	mov r2, #54
	ldrsh r1, [r0, r2]
	cmp r1, #144
	ble _08051F8C
	ldr r0, [r7]
	ldrh r1, [r0, #54]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #144
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #54]
_08051F8C:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08051ED4

