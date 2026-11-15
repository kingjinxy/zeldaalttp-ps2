	THUMB_FUNC_START sub_081350DC
sub_081350DC: @ 0x081350DC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r12, r2
	cmp r0, #4
	bne _08135114
	cmp r5, #20
	bhi _081350F8
	mov r5, #0
	b _08135106
_081350F8:
	add r0, r5, #0
	sub r0, r0, #21
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #59
	bls _08135106
	mov r5, #59
_08135106:
	ldr r0, _08135110  @ =gUnknown_083C287C
	add r0, r5, r0
	ldrb r0, [r0]
	b _08135176
	.byte 0x00
	.byte 0x00
_08135110:
	.4byte gUnknown_083C287C
_08135114:
	cmp r5, #35
	bhi _08135120
	mov r0, #0
	mov r12, r0
	mov r5, #0
	b _08135132
_08135120:
	add r0, r5, #0
	sub r0, r0, #36
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #130
	bls _08135132
	mov r5, #130
	mov r1, #255
	mov r12, r1
_08135132:
	ldr r3, _0813517C  @ =gUnknown_083C27E0
	add r0, r5, r3
	ldrb r6, [r0]
	ldr r4, _08135180  @ =gUnknown_083C2864
	mov r2, #15
	add r0, r6, #0
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r4
	mov r7, #0
	ldrsh r1, [r0, r7]
	asr r0, r6, #4
	add r6, r1, #0
	asr r6, r6, r0
	add r0, r5, #1
	add r0, r0, r3
	ldrb r1, [r0]
	add r0, r1, #0
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r4
	mov r2, #0
	ldrsh r0, [r0, r2]
	asr r1, r1, #4
	asr r0, r0, r1
	sub r0, r0, r6
	mov r7, r12
	mul r7, r0, r7
	add r0, r7, #0
	asr r0, r0, #8
	add r0, r6, r0
	mov r1, #128
	lsl r1, r1, #4
	add r0, r0, r1
_08135176:
	pop {r4-r7}
	pop {r1}
	bx r1
_0813517C:
	.4byte gUnknown_083C27E0
_08135180:
	.4byte gUnknown_083C2864
	THUMB_FUNC_END sub_081350DC

