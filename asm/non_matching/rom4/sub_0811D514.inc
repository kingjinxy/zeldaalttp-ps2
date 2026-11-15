	THUMB_FUNC_START sub_0811D514
sub_0811D514: @ 0x0811D514
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r1, _0811D5C8  @ =gRam
	ldr r0, _0811D5CC  @ =0x00001733
	add r2, r1, r0
	mov r0, #2
	strb r0, [r2]
	ldr r2, _0811D5D0  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	add r3, r1, #0
	cmp r0, #0
	beq _0811D53E
	b _0811D65A
_0811D53E:
	ldr r4, _0811D5D4  @ =0x0000178C
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #13
	bne _0811D5B4
	ldr r5, _0811D5D8  @ =0x0000180D
	add r0, r3, r5
	mov r2, #1
	strb r2, [r0]
	ldr r6, _0811D5DC  @ =0x00001844
	add r0, r3, r6
	mov r4, r9
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811D5F4
	strb r2, [r1]
	ldr r1, _0811D5E0  @ =gUnknown_0817F9EC
	ldr r0, _0811D5E4  @ =gMagicUsage
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	mov r5, #150
	lsl r5, r5, #4
	add r2, r3, r5
	strb r1, [r2]
	ldr r4, _0811D5E8  @ =gMagicMeter
	ldrb r0, [r4]
	cmp r0, #0
	beq _0811D5B4
	sub r1, r0, r1
	lsl r0, r1, #24
	cmp r0, #0
	blt _0811D5B4
	strb r1, [r2]
	sub r6, r6, #29
	add r0, r3, r6
	mov r5, r9
	add r1, r5, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811D5A6
	mov r0, #23
	strb r0, [r1]
	ldrb r0, [r2]
	strb r0, [r4]
_0811D5A6:
	ldr r6, _0811D5EC  @ =0x00000547
	add r0, r3, r6
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _0811D5F4
_0811D5B4:
	ldr r1, _0811D5D8  @ =0x0000180D
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0811D5F0  @ =0x00000E15
	add r0, r3, r2
	add r0, r0, r9
	strb r1, [r0]
	b _0811D7A6
	.byte 0x00
	.byte 0x00
_0811D5C8:
	.4byte gRam
_0811D5CC:
	.4byte 0x00001733
_0811D5D0:
	.4byte 0x000009AD
_0811D5D4:
	.4byte 0x0000178C
_0811D5D8:
	.4byte 0x0000180D
_0811D5DC:
	.4byte 0x00001844
_0811D5E0:
	.4byte gUnknown_0817F9EC
_0811D5E4:
	.4byte gMagicUsage
_0811D5E8:
	.4byte gMagicMeter
_0811D5EC:
	.4byte 0x00000547
_0811D5F0:
	.4byte 0x00000E15
_0811D5F4:
	ldr r4, _0811D61C  @ =0x00000E1F
	add r0, r3, r4
	add r0, r0, r9
	ldrb r0, [r0]
	cmp r0, #3
	beq _0811D63A
	mov r2, #0
	ldr r5, _0811D620  @ =0x00000E29
	add r1, r3, r5
	add r1, r1, r9
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bls _0811D624
	mov r2, #3
	b _0811D632
	.byte 0x00
	.byte 0x00
_0811D61C:
	.4byte 0x00000E1F
_0811D620:
	.4byte 0x00000E29
_0811D624:
	cmp r0, #2
	bne _0811D62C
	mov r2, #1
	b _0811D632
_0811D62C:
	cmp r0, #3
	bne _0811D632
	mov r2, #2
_0811D632:
	ldr r6, _0811D7B8  @ =0x00000E1F
	add r0, r3, r6
	add r0, r0, r9
	strb r2, [r0]
_0811D63A:
	ldr r1, _0811D7BC  @ =0x00001837
	add r0, r3, r1
	mov r2, r9
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811D65A
	mov r0, #2
	strb r0, [r1]
	ldr r4, _0811D7C0  @ =0x00001733
	add r1, r3, r4
	mov r0, #4
	strb r0, [r1]
_0811D65A:
	ldr r4, _0811D7C4  @ =gRam
	ldr r5, _0811D7C8  @ =0x000016C8
	add r0, r4, r5
	ldrb r2, [r0]
	cmp r2, #127
	bls _0811D66E
	mov r6, #255
	lsl r6, r6, #8
	add r0, r6, #0
	orr r2, r2, r0
_0811D66E:
	ldr r0, _0811D7CC  @ =0x0000FFFF
	cmp r2, r0
	bne _0811D676
	mov r2, #0
_0811D676:
	ldr r1, _0811D7D0  @ =gUnknown_02006890
	mov r3, #182
	lsl r3, r3, #5
	add r0, r4, r3
	ldrh r0, [r0]
	sub r0, r0, r2
	add r0, r0, #12
	strh r0, [r1]
	sub r1, r1, #2
	ldr r5, _0811D7D4  @ =0x000016C4
	add r0, r4, r5
	ldrh r0, [r0]
	add r0, r0, #8
	strh r0, [r1]
	ldr r6, _0811D7D8  @ =0x00000E33
	add r0, r4, r6
	mov r2, r9
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0811D6AA
	mov r0, #21
	strb r0, [r1]
	mov r0, #94
	bl sub_080C1A8C
_0811D6AA:
	ldr r3, _0811D7DC  @ =0x00001734
	add r0, r4, r3
	mov r5, r9
	strb r5, [r0]
	ldr r6, _0811D7B8  @ =0x00000E1F
	add r0, r4, r6
	add r0, r0, r9
	ldrb r0, [r0]
	mov r8, r0
	add r7, r4, #0
	ldr r0, _0811D7E0  @ =gUnknown_03003E74
	mov r10, r0
	ldr r1, _0811D7E4  @ =0x00000E3D
	add r0, r7, r1
	add r0, r0, r9
	str r0, [sp, #4]
_0811D6CA:
	ldr r2, _0811D7E8  @ =gUnknown_03002BDD
	ldrb r0, [r2]
	cmp r0, #0
	bne _0811D6E0
	ldr r0, _0811D7EC  @ =gUnknown_02006880
	add r0, r0, r8
	ldrb r1, [r0]
	add r1, r1, #3
	mov r2, #63
	and r1, r1, r2
	strb r1, [r0]
_0811D6E0:
	ldr r0, _0811D7F0  @ =gUnknown_02006888
	ldrb r1, [r0]
	mov r3, #151
	lsl r3, r3, #4
	add r0, r7, r3
	strb r1, [r0]
	ldr r0, _0811D7EC  @ =gUnknown_02006880
	add r0, r0, r8
	ldrb r1, [r0]
	mov r0, r8
	bl sub_080C06EC
	bl sub_080C0790
	mov r4, r10
	ldrh r0, [r4]
	ldr r5, _0811D7F4  @ =gUnknown_03002B94
	ldrh r1, [r5]
	ldr r6, _0811D7F8  @ =gUnknown_03002B90
	ldrh r2, [r6]
	ldr r3, _0811D7FC  @ =gUnknown_08171CFE
	add r3, r3, r8
	ldrb r3, [r3]
	ldr r5, _0811D7C0  @ =0x00001733
	add r4, r7, r5
	ldr r6, _0811D800  @ =0x00001724
	add r5, r7, r6
	ldrb r6, [r4]
	ldrb r4, [r5]
	orr r4, r4, r6
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	mov r5, r10
	ldrh r0, [r5]
	add r0, r0, #1
	strh r0, [r5]
	ldr r6, _0811D804  @ =0x00000958
	add r0, r7, r6
	ldrh r0, [r0]
	ldr r1, _0811D7F8  @ =gUnknown_03002B90
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r2, _0811D808  @ =0x00000968
	add r1, r7, r2
	strh r0, [r1]
	ldr r3, _0811D80C  @ =0x00000952
	add r0, r7, r3
	ldrh r0, [r0]
	ldr r4, _0811D7F4  @ =gUnknown_03002B94
	ldrh r4, [r4]
	add r0, r0, r4
	ldr r5, _0811D810  @ =gUnknown_03002B9C
	strh r0, [r5]
	ldr r6, _0811D814  @ =0x00000DC5
	add r0, r7, r6
	add r0, r0, r9
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _0811D818  @ =0x00000DD9
	add r1, r7, r0
	add r1, r1, r9
	add r2, r2, #1
	add r0, r7, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _0811D81C  @ =0x00000DCF
	add r0, r7, r3
	add r0, r0, r9
	ldrb r1, [r5]
	strb r1, [r0]
	ldr r4, _0811D820  @ =0x00000DE3
	add r1, r7, r4
	add r1, r1, r9
	ldr r5, _0811D824  @ =0x0000096D
	add r0, r7, r5
	ldrb r0, [r0]
	strb r0, [r1]
	mov r0, #0
	ldr r6, [sp, #4]
	strb r0, [r6]
	ldr r1, _0811D7E8  @ =gUnknown_03002BDD
	ldrb r0, [r1]
	cmp r0, #0
	bne _0811D798
	mov r0, r9
	mov r1, #0
	bl sub_080C09FC
_0811D798:
	mov r0, r8
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	mov r8, r2
	cmp r0, #0
	bge _0811D6CA
_0811D7A6:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811D7B8:
	.4byte 0x00000E1F
_0811D7BC:
	.4byte 0x00001837
_0811D7C0:
	.4byte 0x00001733
_0811D7C4:
	.4byte gRam
_0811D7C8:
	.4byte 0x000016C8
_0811D7CC:
	.4byte 0x0000FFFF
_0811D7D0:
	.4byte gUnknown_02006890
_0811D7D4:
	.4byte 0x000016C4
_0811D7D8:
	.4byte 0x00000E33
_0811D7DC:
	.4byte 0x00001734
_0811D7E0:
	.4byte gUnknown_03003E74
_0811D7E4:
	.4byte 0x00000E3D
_0811D7E8:
	.4byte gUnknown_03002BDD
_0811D7EC:
	.4byte gUnknown_02006880
_0811D7F0:
	.4byte gUnknown_02006888
_0811D7F4:
	.4byte gUnknown_03002B94
_0811D7F8:
	.4byte gUnknown_03002B90
_0811D7FC:
	.4byte gUnknown_08171CFE
_0811D800:
	.4byte 0x00001724
_0811D804:
	.4byte 0x00000958
_0811D808:
	.4byte 0x00000968
_0811D80C:
	.4byte 0x00000952
_0811D810:
	.4byte gUnknown_03002B9C
_0811D814:
	.4byte 0x00000DC5
_0811D818:
	.4byte 0x00000DD9
_0811D81C:
	.4byte 0x00000DCF
_0811D820:
	.4byte 0x00000DE3
_0811D824:
	.4byte 0x0000096D
	THUMB_FUNC_END sub_0811D514

