	THUMB_FUNC_START sub_08124750
sub_08124750: @ 0x08124750
	push {r4-r6,lr}
	mov r6, #23
	ldr r2, _0812476C  @ =gUnknown_020068B8
_08124756:
	add r1, r6, r2
	ldrb r0, [r1]
	cmp r0, #255
	beq _08124770
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r0, #0
	bge _08124756
	b _081247FE
	.byte 0x00
	.byte 0x00
_0812476C:
	.4byte gUnknown_020068B8
_08124770:
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08124804  @ =gUnknown_02006930
	add r1, r6, r0
	mov r0, #4
	strb r0, [r1]
	bl GetRandomInt
	ldr r3, _08124808  @ =gRam
	mov r1, #151
	lsl r1, r1, #4
	add r4, r3, r1
	lsl r1, r0, #24
	asr r1, r1, #28
	ldr r2, _0812480C  @ =0x00000971
	add r5, r3, r2
	strb r1, [r5]
	mov r1, #15
	and r1, r1, r0
	strb r1, [r4]
	mov r2, #7
	and r2, r2, r6
	ldr r0, _08124810  @ =gUnknown_02006898
	add r0, r2, r0
	mov r1, #0
	ldrsb r1, [r4, r1]
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _08124814  @ =gUnknown_020068A0
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #150
	lsl r0, r0, #4
	add r4, r3, r0
	strh r1, [r4]
	ldr r0, _08124818  @ =gUnknown_020068A8
	add r0, r2, r0
	mov r1, #0
	ldrsb r1, [r5, r1]
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _0812481C  @ =gUnknown_020068B0
	add r2, r2, r0
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r0, _08124820  @ =0x00000964
	add r2, r3, r0
	strh r1, [r2]
	ldr r0, _08124824  @ =gUnknown_020068D0
	add r1, r6, r0
	ldrb r0, [r4]
	strb r0, [r1]
	ldr r4, _08124828  @ =gUnknown_020068E8
	add r1, r6, r4
	ldr r4, _0812482C  @ =0x00000961
	add r0, r3, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08124830  @ =gUnknown_02006900
	add r0, r6, r0
	ldrb r1, [r2]
	strb r1, [r0]
	ldr r0, _08124834  @ =gUnknown_02006918
	add r1, r6, r0
	ldr r2, _08124838  @ =0x00000965
	add r3, r3, r2
	ldrb r0, [r3]
	strb r0, [r1]
_081247FE:
	pop {r4-r6}
	pop {r0}
	bx r0
_08124804:
	.4byte gUnknown_02006930
_08124808:
	.4byte gRam
_0812480C:
	.4byte 0x00000971
_08124810:
	.4byte gUnknown_02006898
_08124814:
	.4byte gUnknown_020068A0
_08124818:
	.4byte gUnknown_020068A8
_0812481C:
	.4byte gUnknown_020068B0
_08124820:
	.4byte 0x00000964
_08124824:
	.4byte gUnknown_020068D0
_08124828:
	.4byte gUnknown_020068E8
_0812482C:
	.4byte 0x00000961
_08124830:
	.4byte gUnknown_02006900
_08124834:
	.4byte gUnknown_02006918
_08124838:
	.4byte 0x00000965
	THUMB_FUNC_END sub_08124750

