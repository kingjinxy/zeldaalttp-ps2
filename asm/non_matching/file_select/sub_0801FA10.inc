	THUMB_FUNC_START sub_0801FA10
sub_0801FA10: @ 0x0801FA10
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #9
	bl sub_080124C0
	add r4, r0, #0
	cmp r4, #0
	beq _0801FA66
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	str r5, [r4, #84]
	str r4, [r5, #88]
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r5, #28]
	add r1, r5, #0
	add r1, r1, #46
	mov r0, #5
	strb r0, [r1]
	add r2, r5, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	ldr r0, _0801FA6C  @ =gUnknown_0813B44C
	str r0, [r5, #72]
	bl sub_0800099C
	mov r1, #3
	and r0, r0, r1
	add r1, r5, #0
	add r1, r1, #42
	strb r0, [r1]
	add r0, r5, #0
	bl sub_0801FD28
_0801FA66:
	pop {r4,r5}
	pop {r0}
	bx r0
_0801FA6C:
	.4byte gUnknown_0813B44C
	THUMB_FUNC_END sub_0801FA10

