	THUMB_FUNC_START sub_080BF294
sub_080BF294: @ 0x080BF294
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080BF3AC  @ =gRam
	ldr r1, _080BF3B0  @ =0x00000DC5
	add r0, r5, r1
	add r0, r4, r0
	mov r2, #182
	lsl r2, r2, #5
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r3, _080BF3B4  @ =0x00000DD9
	add r0, r5, r3
	add r0, r4, r0
	ldr r6, _080BF3B8  @ =0x000016C1
	add r1, r5, r6
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080BF3BC  @ =0x00000DCF
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #10
	add r0, r5, r3
	add r0, r4, r0
	add r6, r6, #4
	add r1, r5, r6
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080BF3C0  @ =0x00000952
	add r0, r5, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r3, _080BF3C4  @ =0x00000958
	add r0, r5, r3
	mov r6, #0
	ldrsh r2, [r0, r6]
	add r0, r4, #0
	bl sub_080BF174
	ldr r1, _080BF3C8  @ =0x00000E29
	add r0, r5, r1
	add r0, r4, r0
	ldrb r3, [r0]
	lsl r0, r3, #1
	ldr r2, _080BF3CC  @ =gUnknown_08171998
	ldr r6, _080BF3D0  @ =0x00000E3D
	add r1, r5, r6
	add r4, r4, r1
	ldrb r1, [r4]
	add r1, r1, r2
	add r0, r0, r3
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, #2
	mov r8, r0
	mov r9, r5
	ldr r1, _080BF3D4  @ =0x00001724
	add r1, r1, r9
	mov r10, r1
_080BF324:
	ldr r0, _080BF3D8  @ =gUnknown_081718D8
	add r4, r7, r0
	ldrb r0, [r4]
	cmp r0, #255
	beq _080BF388
	ldr r0, _080BF3DC  @ =gUnknown_03003E74
	mov r1, r8
	sub r1, r1, #2
	ldrh r0, [r0]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080BF3E0  @ =0x00000964
	add r2, r2, r9
	ldr r1, _080BF3E4  @ =gUnknown_08171968
	add r1, r7, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	ldr r2, _080BF3E8  @ =gUnknown_08171938
	add r2, r7, r2
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldrb r3, [r4]
	ldr r6, _080BF3EC  @ =gUnknown_08171908
	add r6, r7, r6
	mov r5, r10
	ldrb r4, [r5]
	mov r5, #4
	orr r4, r4, r5
	ldrb r5, [r6]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
_080BF388:
	mov r6, #1
	neg r6, r6
	add r8, r8, r6
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, r8
	cmp r0, #0
	bge _080BF324
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BF3AC:
	.4byte gRam
_080BF3B0:
	.4byte 0x00000DC5
_080BF3B4:
	.4byte 0x00000DD9
_080BF3B8:
	.4byte 0x000016C1
_080BF3BC:
	.4byte 0x00000DCF
_080BF3C0:
	.4byte 0x00000952
_080BF3C4:
	.4byte 0x00000958
_080BF3C8:
	.4byte 0x00000E29
_080BF3CC:
	.4byte gUnknown_08171998
_080BF3D0:
	.4byte 0x00000E3D
_080BF3D4:
	.4byte 0x00001724
_080BF3D8:
	.4byte gUnknown_081718D8
_080BF3DC:
	.4byte gUnknown_03003E74
_080BF3E0:
	.4byte 0x00000964
_080BF3E4:
	.4byte gUnknown_08171968
_080BF3E8:
	.4byte gUnknown_08171938
_080BF3EC:
	.4byte gUnknown_08171908
	THUMB_FUNC_END sub_080BF294

