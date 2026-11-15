	THUMB_FUNC_START sub_0801D764
sub_0801D764: @ 0x0801D764
	push {r4,lr}
	add r2, r0, #0
	ldr r0, [r2, #112]
	ldrh r1, [r0]
	ldr r0, _0801D790  @ =0x0000FFFF
	cmp r1, r0
	bne _0801D776
	ldr r0, [r2, #116]
	str r0, [r2, #112]
_0801D776:
	ldr r3, [r2, #112]
	ldrh r1, [r3]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	add r4, r3, #0
	cmp r0, #0
	beq _0801D794
	mov r0, #8
	strb r0, [r2, #21]
	ldrh r0, [r4, #2]
	strb r0, [r2, #23]
	b _0801D840
_0801D790:
	.4byte 0x0000FFFF
_0801D794:
	add r0, r2, #0
	add r0, r0, #43
	strb r1, [r0]
	add r3, r4, #2
	lsl r0, r1, #24
	lsr r0, r0, #26
	strb r0, [r2, #21]
	ldrb r0, [r2, #21]
	cmp r0, #7
	bhi _0801D834
	lsl r0, r0, #2
	ldr r1, _0801D7B4  @ =0x0801D7B8
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0801D7B4:
	.4byte 0x0801D7B8
	.4byte _0801D7E4
	.4byte _0801D7D8
	.4byte _0801D7FC
	.4byte _0801D7F0
	.4byte _0801D810
	.4byte _0801D804
	.4byte _0801D828
	.4byte _0801D81C
_0801D7D8:
	ldrh r0, [r3]
	ldrh r1, [r2, #50]
	add r0, r0, r1
	add r1, r2, #0
	add r1, r1, #120
	strh r0, [r1]
_0801D7E4:
	ldrh r0, [r2, #54]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	b _0801D832
_0801D7F0:
	ldrh r0, [r3]
	ldrh r1, [r2, #54]
	add r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	strh r0, [r1]
_0801D7FC:
	ldrh r0, [r3]
	ldrh r1, [r2, #50]
	add r0, r0, r1
	b _0801D82E
_0801D804:
	ldrh r0, [r2, #50]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r1, r2, #0
	add r1, r1, #120
	strh r0, [r1]
_0801D810:
	ldrh r0, [r3]
	ldrh r1, [r2, #54]
	add r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	b _0801D832
_0801D81C:
	ldrh r0, [r2, #54]
	ldrh r1, [r3]
	sub r0, r0, r1
	add r1, r2, #0
	add r1, r1, #122
	strh r0, [r1]
_0801D828:
	ldrh r0, [r2, #50]
	ldrh r1, [r3]
	sub r0, r0, r1
_0801D82E:
	add r1, r2, #0
	add r1, r1, #120
_0801D832:
	strh r0, [r1]
_0801D834:
	add r3, r3, #2
	ldrh r0, [r3]
	ldr r4, [r2, #112]
	cmp r0, #0
	beq _0801D840
	str r0, [r2, #12]
_0801D840:
	add r0, r4, #0
	add r0, r0, #8
	str r0, [r2, #112]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801D764

