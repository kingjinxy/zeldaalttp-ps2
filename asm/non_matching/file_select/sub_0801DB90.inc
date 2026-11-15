	THUMB_FUNC_START sub_0801DB90
sub_0801DB90: @ 0x0801DB90
	push {r4,r5,lr}
	add r4, r0, #0
	ldrh r1, [r4, #50]
	add r0, r0, #112
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #114
	strh r0, [r1]
	ldr r3, _0801DC10  @ =gUnknown_03000E20
	ldrh r0, [r3]
	add r0, r0, #1
	mov r2, #7
	and r0, r0, r2
	add r0, r0, #116
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	sub r0, r0, #8
	lsr r1, r1, #4
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r5, [r4, #50]
	add r0, r0, r5
	strh r0, [r4, #50]
	sub r1, r1, #8
	ldrh r0, [r4, #54]
	add r1, r1, r0
	strh r1, [r4, #54]
	ldrh r0, [r3]
	add r0, r0, #1
	and r0, r0, r2
	lsl r0, r0, #2
	ldr r1, [r4, #124]
	lsr r1, r1, r0
	mov r0, #7
	and r1, r1, r0
	ldrb r0, [r4, #10]
	lsl r0, r0, #3
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	add r0, r0, #42
	ldrb r2, [r0]
	cmp r1, r2
	beq _0801DBF8
	strb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_0801DBF8:
	ldrb r0, [r4, #10]
	cmp r0, #3
	beq _0801DC04
	add r0, r4, #0
	bl sub_0801DC14
_0801DC04:
	add r0, r4, #0
	bl 0x08003828
	pop {r4,r5}
	pop {r0}
	bx r0
_0801DC10:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0801DB90

