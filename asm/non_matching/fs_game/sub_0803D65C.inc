	THUMB_FUNC_START sub_0803D65C
sub_0803D65C: @ 0x0803D65C
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r2, r0, #0
	add r0, r1, #0
	add r1, r7, #0
	strb r2, [r1]
	add r1, r7, #2
	strh r0, [r1]
	add r4, r7, #4
	add r0, r7, #2
	ldrh r1, [r0]
	add r0, r1, #0
	mov r1, #20
	bl __udivsi3
	add r1, r0, #0
	strh r1, [r4]
	add r4, r7, #2
	add r0, r7, #2
	ldrh r1, [r0]
	add r0, r1, #0
	mov r1, #20
	bl __umodsi3
	add r1, r0, #0
	strh r1, [r4]
_0803D692:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrh r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	lsl r1, r2, #16
	asr r0, r1, #16
	mov r1, #1
	cmn r0, r1
	bne _0803D6AC
	b _0803D6CC
_0803D6AC:
	add r0, r7, #0
	ldrb r4, [r0]
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r2, r0, #24
	add r0, r4, #0
	mov r1, #20
	bl sub_0803D520
	b _0803D692
_0803D6CC:
	add r4, r7, #4
	add r0, r7, #2
	ldrh r1, [r0]
	add r0, r1, #0
	mov r1, #5
	bl __udivsi3
	add r1, r0, #0
	strh r1, [r4]
_0803D6DE:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrh r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	lsl r1, r2, #16
	asr r0, r1, #16
	mov r1, #1
	cmn r0, r1
	bne _0803D6F8
	b _0803D718
_0803D6F8:
	add r0, r7, #0
	ldrb r4, [r0]
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r2, r0, #24
	add r0, r4, #0
	mov r1, #5
	bl sub_0803D520
	b _0803D6DE
_0803D718:
	add r4, r7, #4
	add r0, r7, #2
	ldrh r1, [r0]
	add r0, r1, #0
	mov r1, #5
	bl __umodsi3
	add r1, r0, #0
	strh r1, [r4]
_0803D72A:
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrh r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	lsl r1, r2, #16
	asr r0, r1, #16
	mov r1, #1
	cmn r0, r1
	bne _0803D744
	b _0803D764
_0803D744:
	add r0, r7, #0
	ldrb r4, [r0]
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #31
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r2, r0, #24
	add r0, r4, #0
	mov r1, #1
	bl sub_0803D520
	b _0803D72A
_0803D764:
	b _0803D766
_0803D766:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803D65C

	.byte 0x00
	.byte 0x00
