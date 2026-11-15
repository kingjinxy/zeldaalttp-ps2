	THUMB_FUNC_START sub_0801AD3C
sub_0801AD3C: @ 0x0801AD3C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r5, #7
	and r5, r5, r1
	cmp r5, #1
	beq _0801AD84
	cmp r5, #2
	beq _0801AE3C
	mov r5, #128
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0801AD66
	b _0801AE96
_0801AD66:
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
	add r0, r4, #0
	add r0, r0, #113
	ldrb r1, [r0]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0801AD82
	b _0801AE96
_0801AD82:
	b _0801AE82
_0801AD84:
	mov r1, #0
	mov r8, r1
	mov r2, r8
	strb r2, [r0]
	mov r0, #140
	lsl r0, r0, #9
	str r0, [r4, #16]
	add r0, r4, #0
	bl sub_0801B200
	add r2, r4, #0
	add r2, r2, #43
	ldrb r0, [r2]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	asr r0, r0, #3
	add r1, r4, #0
	add r1, r1, #42
	add r6, r1, #0
	add r7, r2, #0
	ldrb r3, [r6]
	cmp r0, r3
	bne _0801ADBC
	add r0, r4, #0
	add r0, r0, #112
	strb r5, [r0]
	b _0801AE24
_0801ADBC:
	add r0, r4, #0
	add r0, r0, #112
	mov r5, r8
	strb r5, [r0]
	ldrb r0, [r6]
	lsl r0, r0, #3
	ldrb r1, [r7]
	sub r1, r1, r0
	mov r0, #31
	and r1, r1, r0
	cmp r1, #16
	bne _0801AE10
	add r0, r4, #0
	add r0, r0, #113
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801ADFC
	mov r1, #50
	ldrsh r0, [r4, r1]
	mov r2, #54
	ldrsh r1, [r4, r2]
	add r2, r4, #0
	add r2, r2, #116
	mov r3, #0
	ldrsh r2, [r2, r3]
	add r3, r4, #0
	add r3, r3, #118
	mov r5, #0
	ldrsh r3, [r3, r5]
	bl 0x08003F54
	b _0801AE04
_0801ADFC:
	ldr r1, [r4, #88]
	add r0, r4, #0
	bl 0x08009EA4
_0801AE04:
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldrb r0, [r7]
	sub r1, r0, r1
	mov r0, #31
	and r1, r1, r0
_0801AE10:
	cmp r1, #16
	bls _0801AE1A
	ldrb r0, [r6]
	sub r0, r0, #1
	b _0801AE1E
_0801AE1A:
	ldrb r0, [r6]
	add r0, r0, #1
_0801AE1E:
	mov r1, #3
	and r0, r0, r1
	strb r0, [r6]
_0801AE24:
	ldrb r0, [r7]
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	mov r1, #0
	strb r0, [r7]
	strh r1, [r4, #48]
	strh r1, [r4, #52]
	mov r0, #93
	bl 0x08003DFC
	b _0801AE96
_0801AE3C:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0801AE56
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #4
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl 0x08003870
_0801AE56:
	add r0, r4, #0
	add r0, r0, #112
	ldrb r0, [r0]
	cmp r0, #0
	beq _0801AE66
	add r0, r4, #0
	bl sub_0801B0BC
_0801AE66:
	mov r1, #224
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _0801AE96
	add r0, r4, #0
	bl sub_0801B024
	mov r0, #94
	bl 0x08003DFC
	b _0801AE96
_0801AE82:
	mov r1, #0
	mov r0, #5
	strb r0, [r4, #20]
	add r2, r4, #0
	add r2, r2, #43
	mov r0, #16
	strb r0, [r2]
	add r0, r4, #0
	add r0, r0, #112
	strb r1, [r0]
_0801AE96:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801AD3C

