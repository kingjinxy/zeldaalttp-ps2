	THUMB_FUNC_START sub_0807372C
sub_0807372C: @ 0x0807372C
	push {r4-r7,lr}
	ldr r0, _08073778  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r0, r2
	mov r4, #0
	strh r4, [r1]
	ldr r3, _0807377C  @ =0x00000964
	add r5, r0, r3
	strh r4, [r5]
	ldr r6, _08073780  @ =0x000016C4
	add r1, r0, r6
	mov r3, #211
	lsl r3, r3, #5
	add r2, r0, r3
	ldrh r3, [r1]
	mov r6, #0
	ldrsh r1, [r1, r6]
	mov r6, #0
	ldrsh r2, [r2, r6]
	add r7, r0, #0
	cmp r1, r2
	beq _0807379E
	cmp r1, r2
	blt _08073784
	sub r0, r4, #1
	strh r0, [r5]
	sub r0, r1, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	asr r1, r0, #16
	cmp r1, r2
	beq _0807379E
	sub r0, r4, #2
	strh r0, [r5]
	sub r0, r1, #1
	b _0807379A
	.byte 0x00
	.byte 0x00
_08073778:
	.4byte gRam
_0807377C:
	.4byte 0x00000964
_08073780:
	.4byte 0x000016C4
_08073784:
	mov r0, #1
	strh r0, [r5]
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	asr r1, r0, #16
	cmp r1, r2
	beq _0807379E
	mov r0, #2
	strh r0, [r5]
	add r0, r1, #1
_0807379A:
	lsl r0, r0, #16
	lsr r3, r0, #16
_0807379E:
	ldr r1, _080737E0  @ =0x000016C4
	add r0, r7, r1
	strh r3, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r7, r2
	ldr r3, _080737E4  @ =0x00001A5C
	add r1, r7, r3
	ldrh r3, [r0]
	mov r4, #0
	ldrsh r2, [r0, r4]
	mov r6, #0
	ldrsh r4, [r1, r6]
	cmp r2, r4
	beq _0807380A
	cmp r2, r4
	blt _080737E8
	mov r0, #150
	lsl r0, r0, #4
	add r5, r7, r0
	ldrh r6, [r5]
	sub r0, r6, #1
	strh r0, [r5]
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	asr r1, r0, #16
	cmp r1, r4
	beq _0807380A
	sub r0, r6, #2
	strh r0, [r5]
	sub r0, r1, #1
	b _08073806
_080737E0:
	.4byte 0x000016C4
_080737E4:
	.4byte 0x00001A5C
_080737E8:
	mov r1, #150
	lsl r1, r1, #4
	add r5, r7, r1
	ldrh r0, [r5]
	add r6, r0, #1
	strh r6, [r5]
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
	asr r1, r0, #16
	cmp r1, r4
	beq _0807380A
	add r0, r6, #1
	strh r0, [r5]
	add r0, r1, #1
_08073806:
	lsl r0, r0, #16
	lsr r3, r0, #16
_0807380A:
	mov r2, #182
	lsl r2, r2, #5
	add r0, r7, r2
	strh r3, [r0]
	ldr r4, _08073870  @ =0x00001A5C
	add r1, r7, r4
	lsl r0, r3, #16
	asr r0, r0, #16
	mov r6, #0
	ldrsh r1, [r1, r6]
	cmp r0, r1
	bne _0807384A
	ldr r1, _08073874  @ =0x000016C4
	add r0, r7, r1
	mov r2, #211
	lsl r2, r2, #5
	add r1, r7, r2
	mov r3, #0
	ldrsh r2, [r0, r3]
	mov r4, #0
	ldrsh r0, [r1, r4]
	cmp r2, r0
	bne _0807384A
	ldr r6, _08073878  @ =0x000009E8
	add r1, r7, r6
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r0, _0807387C  @ =0x000016F8
	add r1, r7, r0
	mov r0, #0
	strb r0, [r1]
_0807384A:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r7, r1
	ldrh r1, [r0]
	ldr r2, _08073880  @ =0x000016D6
	add r0, r7, r2
	strb r1, [r0]
	ldr r3, _08073884  @ =0x00000964
	add r0, r7, r3
	ldrh r1, [r0]
	ldr r4, _08073888  @ =0x000016D7
	add r0, r7, r4
	strb r1, [r0]
	bl sub_080718D4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08073870:
	.4byte 0x00001A5C
_08073874:
	.4byte 0x000016C4
_08073878:
	.4byte 0x000009E8
_0807387C:
	.4byte 0x000016F8
_08073880:
	.4byte 0x000016D6
_08073884:
	.4byte 0x00000964
_08073888:
	.4byte 0x000016D7
	THUMB_FUNC_END sub_0807372C

