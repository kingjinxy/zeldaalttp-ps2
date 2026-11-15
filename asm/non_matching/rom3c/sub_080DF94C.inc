	THUMB_FUNC_START sub_080DF94C
sub_080DF94C: @ 0x080DF94C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r6, _080DF9D8  @ =gRam
	ldr r1, _080DF9DC  @ =0x00000FC2
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #80
	strb r1, [r0]
	ldr r3, _080DF9E0  @ =0x00000FB2
	add r0, r6, r3
	add r0, r7, r0
	ldrb r0, [r0]
	mov r1, #150
	lsl r1, r1, #4
	add r4, r6, r1
	strh r0, [r4]
	mov r3, #0
	ldrsh r0, [r4, r3]
	neg r0, r0
	bl sub_080AA83C
	ldr r5, _080DF9E4  @ =gWishingPondRupeeCount
	ldrb r0, [r4]
	ldrb r1, [r5]
	add r0, r0, r1
	strb r0, [r5]
	ldr r3, _080DF9E8  @ =0x00001082
	add r0, r6, r3
	add r0, r7, r0
	ldrb r0, [r0]
	bl sub_080AE35C
	ldrb r0, [r5]
	cmp r0, #99
	bhi _080DF9F8
	ldrb r2, [r5]
	ldr r0, _080DF9EC  @ =0x00000964
	add r3, r6, r0
	mov r0, #0
	strb r0, [r3]
	add r1, r6, #0
	cmp r2, #9
	bls _080DF9BA
	add r4, r3, #0
	mov r3, #0
_080DF9A8:
	add r0, r2, #0
	sub r0, r0, #10
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r0, r3, #1
	add r3, r0, #0
	cmp r2, #9
	bhi _080DF9A8
	strb r0, [r4]
_080DF9BA:
	ldr r3, _080DF9EC  @ =0x00000964
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #4
	orr r2, r2, r0
	ldr r3, _080DF9F0  @ =0x00001AEC
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080DF9F4  @ =0x00000F52
	add r1, r1, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080DFA06
_080DF9D8:
	.4byte gRam
_080DF9DC:
	.4byte 0x00000FC2
_080DF9E0:
	.4byte 0x00000FB2
_080DF9E4:
	.4byte gWishingPondRupeeCount
_080DF9E8:
	.4byte 0x00001082
_080DF9EC:
	.4byte 0x00000964
_080DF9F0:
	.4byte 0x00001AEC
_080DF9F4:
	.4byte 0x00000F52
_080DF9F8:
	sub r0, r0, #100
	strb r0, [r5]
	ldr r1, _080DFA0C  @ =0x00000F52
	add r0, r6, r1
	add r0, r7, r0
	mov r1, #5
	strb r1, [r0]
_080DFA06:
	pop {r4-r7}
	pop {r0}
	bx r0
_080DFA0C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DF94C

