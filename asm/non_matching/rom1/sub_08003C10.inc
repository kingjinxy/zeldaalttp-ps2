	.syntax unified
	THUMB_FUNC_START sub_08003C10
sub_08003C10: @ 0X08003C10
	push {r4, r5, r6, lr}
	adds r6, r0, #0
	movs r5, #0
	ldr r4, [pc, #664]
	ldr r1, [r4, #0]
	ldr r1, [r1, #0]
	bl sub_08003C5C
	orrs r5, r0
	ldr r1, [r4, #4]
	ldr r1, [r1, #0]
	cmp r1, #0
	beq.n _08003C58
	adds r0, r6, #0
	bl sub_08003C5C
	lsls r0, r0, #1
	orrs r5, r0
	ldr r1, [r4, #8]
	ldr r1, [r1, #0]
	cmp r1, #0
	beq.n _08003C58
	adds r0, r6, #0
	bl sub_08003C5C
	lsls r0, r0, #2
	orrs r5, r0
	ldr r1, [r4, #12]
	ldr r1, [r1, #0]
	cmp r1, #0
	beq.n _08003C58
	adds r0, r6, #0
	bl sub_08003C5C
	lsls r0, r0, #3
	orrs r5, r0
_08003C58:
	adds r0, r5, #0
	pop {r4, r5, r6, pc}
	.syntax unified
	.thumb
