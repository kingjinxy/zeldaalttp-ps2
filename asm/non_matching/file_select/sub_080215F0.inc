	THUMB_FUNC_START sub_080215F0
sub_080215F0: @ 0x080215F0
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #101
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	cmp r0, #0
	beq _08021604
	str r5, [r0, #84]
_08021604:
	mov r2, #1
	mov r4, #1
	strb r4, [r5, #20]
	ldrb r0, [r5, #30]
	lsl r0, r0, #28
	lsr r0, r0, #28
	add r0, r0, #1
	mov r1, #15
	and r0, r0, r1
	lsl r1, r0, #4
	orr r1, r1, r0
	strb r1, [r5, #30]
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r5, #28]
	add r0, r5, #0
	mov r1, #6
	bl sub_08003870
	ldr r0, _08021684  @ =gUnknown_03006C80
	ldrb r1, [r0]
	lsl r0, r1, #1
	add r0, r0, r1
	strb r0, [r5, #23]
	mov r0, #120
	strb r0, [r5, #24]
	ldr r0, _08021688  @ =0x00002A30
	str r0, [r5, #124]
	mov r0, #192
	lsl r0, r0, #2
	str r0, [r5, #12]
	add r1, r5, #0
	add r1, r1, #46
	mov r2, #8
	mov r0, #8
	strb r0, [r1]
	ldrb r0, [r5, #28]
	mov r1, #48
	orr r0, r0, r1
	strb r0, [r5, #28]
	add r3, r5, #0
	add r3, r3, #94
	ldrb r1, [r3]
	mov r0, #13
	neg r0, r0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3]
	ldr r0, _0802168C  @ =gUnknown_0813BCAC
	str r0, [r5, #72]
	add r0, r5, #0
	add r0, r0, #106
	strb r4, [r0]
	ldr r1, _08021690  @ =gUnknown_03000450
	ldr r0, [r1]
	str r0, [r5, #88]
	str r5, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08021684:
	.4byte gUnknown_03006C80
_08021688:
	.4byte 0x00002A30
_0802168C:
	.4byte gUnknown_0813BCAC
_08021690:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_080215F0

