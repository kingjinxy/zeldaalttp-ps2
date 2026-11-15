	THUMB_FUNC_START sub_080E95CC
sub_080E95CC: @ 0x080E95CC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	mov r1, #14
	bl sub_080CF0AC
	mov r6, #7
	ldr r5, _080E96D8  @ =gRam
	mov r1, #0
	mov r9, r1
	ldr r3, _080E96DC  @ =0x00001172
	add r3, r3, r5
	mov r8, r3
_080E95F0:
	mov r0, #8
	add r1, r7, #0
	bl sub_080CA538
	add r4, r0, #0
	lsl r6, r6, #24
	cmp r4, #0
	blt _080E96BC
	ldr r1, _080E96E0  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	ldr r0, _080E96E4  @ =gUnknown_08177AF9
	asr r2, r6, #24
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080E96E8  @ =gUnknown_08177B01
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #4
	ldr r3, _080E96EC  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080E96F0  @ =0x00000964
	add r1, r5, r0
	ldr r0, _080E96F4  @ =gUnknown_08177B09
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080E96F8  @ =gUnknown_08177B11
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #4
	sub r3, r3, #48
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080E96FC  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _080E9700  @ =gUnknown_08177B19
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r3, r3, #32
	add r1, r5, r3
	add r1, r4, r1
	ldr r0, _080E9704  @ =gUnknown_08177B21
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	bl GetRandomInt
	ldr r1, _080E9708  @ =0x00001152
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #15
	and r1, r1, r0
	add r1, r1, #24
	strb r1, [r2]
	ldr r3, _080E970C  @ =0x00000F52
	add r0, r5, r3
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080E9710  @ =0x00001142
	add r0, r5, r1
	add r0, r4, r0
	mov r3, r9
	strb r3, [r0]
	ldr r0, _080E9714  @ =0x00001032
	add r1, r5, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #64
	orr r2, r2, r0
	strb r2, [r1]
	mov r1, r8
	add r0, r4, r1
	strb r2, [r0]
_080E96BC:
	mov r3, #255
	lsl r3, r3, #24
	add r0, r6, r3
	lsr r6, r0, #24
	cmp r0, #0
	bge _080E95F0
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E96D8:
	.4byte gRam
_080E96DC:
	.4byte 0x00001172
_080E96E0:
	.4byte 0x00000FA2
_080E96E4:
	.4byte gUnknown_08177AF9
_080E96E8:
	.4byte gUnknown_08177B01
_080E96EC:
	.4byte 0x00000EE2
_080E96F0:
	.4byte 0x00000964
_080E96F4:
	.4byte gUnknown_08177B09
_080E96F8:
	.4byte gUnknown_08177B11
_080E96FC:
	.4byte 0x00000F22
_080E9700:
	.4byte gUnknown_08177B19
_080E9704:
	.4byte gUnknown_08177B21
_080E9708:
	.4byte 0x00001152
_080E970C:
	.4byte 0x00000F52
_080E9710:
	.4byte 0x00001142
_080E9714:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080E95CC

