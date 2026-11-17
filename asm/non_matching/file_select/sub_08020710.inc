	THUMB_FUNC_START sub_08020710
sub_08020710: @ 0x08020710
	push {r4,lr}
	add r4, r0, #0
	mov r0, #9
	bl sub_080124C0
	cmp r0, #0
	beq _08020756
	str r4, [r0, #84]
	str r0, [r4, #88]
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r1, r4, #0
	add r1, r1, #46
	mov r0, #5
	strb r0, [r1]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _0802075C  @ =gUnknown_0813B7AC
	str r0, [r4, #72]
	mov r0, #100
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
_08020756:
	pop {r4}
	pop {r0}
	bx r0
_0802075C:
	.4byte gUnknown_0813B7AC
	THUMB_FUNC_END sub_08020710

