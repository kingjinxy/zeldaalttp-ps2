	THUMB_FUNC_START sub_0809F6F0
sub_0809F6F0: @ 0x0809F6F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r1, _0809F730  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r3, r1, r0
	ldrb r2, [r3]
	str r2, [sp]
	ldr r4, _0809F734  @ =0x00001726
	add r0, r1, r4
	ldrb r2, [r0]
	mov r0, #2
	and r0, r0, r2
	cmp r0, #0
	bne _0809F73C
	mov r1, #1
	and r1, r1, r2
	neg r0, r1
	orr r0, r0, r1
	asr r2, r0, #31
	mov r0, #4
	and r2, r2, r0
	ldr r5, _0809F730  @ =gRam
	ldr r6, _0809F738  @ =0x0000097C
	add r1, r5, r6
	ldrb r1, [r1]
	b _0809F752
	.byte 0x00
	.byte 0x00
_0809F730:
	.4byte gRam
_0809F734:
	.4byte 0x00001726
_0809F738:
	.4byte 0x0000097C
_0809F73C:
	mov r0, #1
	and r0, r0, r2
	mov r2, #8
	cmp r0, #0
	beq _0809F748
	mov r2, #12
_0809F748:
	ldr r1, _0809F87C  @ =gRam
	ldr r4, _0809F880  @ =0x0000097C
	add r0, r1, r4
	ldrb r1, [r0]
	mov r0, #4
_0809F752:
	and r0, r0, r1
	mov r1, #0
	cmp r0, #0
	bne _0809F75C
	mov r1, #2
_0809F75C:
	strb r1, [r3]
	ldr r7, _0809F87C  @ =gRam
	mov r5, #150
	lsl r5, r5, #4
	add r5, r5, r7
	mov r9, r5
	ldrb r4, [r5]
	add r4, r2, r4
	lsl r4, r4, #24
	ldr r6, _0809F884  @ =0x00001714
	add r1, r7, r6
	mov r0, #0
	strb r0, [r1]
	bl sub_0809E970
	ldr r0, _0809F888  @ =gUnknown_08168276
	lsr r4, r4, #25
	lsl r4, r4, #1
	add r0, r4, r0
	ldr r1, _0809F88C  @ =gPlayerXPosition
	ldrh r2, [r1]
	ldrh r0, [r0]
	add r0, r2, r0
	ldr r5, _0809F890  @ =0x00000A0E
	add r3, r7, r5
	ldrh r6, [r3]
	mov r12, r6
	mov r1, r12
	and r0, r0, r1
	mov r5, r9
	strh r0, [r5]
	ldr r6, _0809F894  @ =0x000016C4
	add r6, r6, r7
	mov r10, r6
	ldr r1, _0809F898  @ =gUnknown_08168286
	add r1, r4, r1
	mov r5, #0
	ldrsh r0, [r6, r5]
	ldrh r1, [r1]
	add r0, r0, r1
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	ldr r6, _0809F89C  @ =0x00000964
	add r6, r6, r7
	mov r8, r6
	strh r0, [r6]
	ldr r0, _0809F8A0  @ =gUnknown_08168296
	add r0, r4, r0
	ldrh r0, [r0]
	add r2, r2, r0
	mov r0, r12
	and r2, r2, r0
	ldr r1, _0809F8A4  @ =0x00000968
	add r6, r7, r1
	strh r2, [r6]
	ldr r0, _0809F8A8  @ =gUnknown_081682A6
	add r4, r4, r0
	mov r2, r10
	mov r5, #0
	ldrsh r0, [r2, r5]
	ldrh r4, [r4]
	add r0, r0, r4
	ldrh r1, [r3]
	and r0, r0, r1
	asr r0, r0, #3
	mov r1, #151
	lsl r1, r1, #4
	add r4, r7, r1
	strh r0, [r4]
	ldr r2, _0809F8AC  @ =0x00000974
	add r5, r7, r2
	mov r0, #1
	strh r0, [r5]
	bl sub_080A0454
	ldrh r0, [r6]
	mov r3, r9
	strh r0, [r3]
	ldrh r0, [r4]
	mov r4, r8
	strh r0, [r4]
	mov r4, #2
	strh r4, [r5]
	bl sub_080A0454
	mov r5, sp
	ldrb r6, [r5]
	mov r5, r9
	strb r6, [r5]
	ldr r1, _0809F880  @ =0x0000097C
	add r0, r7, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	mov r2, #192
	lsl r2, r2, #5
	add r1, r7, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0809F842
	ldr r3, _0809F8B0  @ =0x000017FF
	add r0, r7, r3
	ldr r5, _0809F8B4  @ =0x00001802
	add r1, r7, r5
	ldrb r0, [r0]
	ldrb r1, [r1]
	orr r0, r0, r1
	mov r1, #51
	and r0, r0, r1
	cmp r0, #0
	beq _0809F8CC
_0809F842:
	mov r1, #0
	mov r6, r9
	mov r0, #0
	ldrsb r0, [r6, r0]
	neg r0, r0
	strb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0809F856
	mov r1, #255
_0809F856:
	ldr r2, _0809F87C  @ =gRam
	ldr r3, _0809F8B8  @ =0x00000961
	add r0, r2, r3
	strb r1, [r0]
	ldr r5, _0809F8BC  @ =0x00001726
	add r0, r2, r5
	ldrb r1, [r0]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0809F8C0
	ldr r6, _0809F88C  @ =gPlayerXPosition
	ldrh r0, [r6]
	mov r1, r9
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r6]
	b _0809F8CC
	.byte 0x00
	.byte 0x00
_0809F87C:
	.4byte gRam
_0809F880:
	.4byte 0x0000097C
_0809F884:
	.4byte 0x00001714
_0809F888:
	.4byte gUnknown_08168276
_0809F88C:
	.4byte gPlayerXPosition
_0809F890:
	.4byte 0x00000A0E
_0809F894:
	.4byte 0x000016C4
_0809F898:
	.4byte gUnknown_08168286
_0809F89C:
	.4byte 0x00000964
_0809F8A0:
	.4byte gUnknown_08168296
_0809F8A4:
	.4byte 0x00000968
_0809F8A8:
	.4byte gUnknown_081682A6
_0809F8AC:
	.4byte 0x00000974
_0809F8B0:
	.4byte 0x000017FF
_0809F8B4:
	.4byte 0x00001802
_0809F8B8:
	.4byte 0x00000961
_0809F8BC:
	.4byte 0x00001726
_0809F8C0:
	mov r2, r10
	ldrh r0, [r2]
	mov r3, r9
	ldrh r3, [r3]
	add r0, r0, r3
	strh r0, [r2]
_0809F8CC:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809F6F0

