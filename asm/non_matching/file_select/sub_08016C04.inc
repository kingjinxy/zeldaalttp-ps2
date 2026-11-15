	THUMB_FUNC_START sub_08016C04
sub_08016C04: @ 0x08016C04
	push {r4,lr}
	add r4, r0, #0
	bl 0x0800963C
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl 0x08003594
	ldr r0, [r4, #16]
	cmp r0, #0
	bge _08016C2A
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #3
	bl 0x08003870
_08016C2A:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016C04

