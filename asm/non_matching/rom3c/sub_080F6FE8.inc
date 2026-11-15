	THUMB_FUNC_START sub_080F6FE8
sub_080F6FE8: @ 0x080F6FE8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	ldr r5, _080F70C4  @ =gRam
	ldr r1, _080F70C8  @ =0x00000FB2
	add r0, r5, r1
	mov r2, r10
	add r1, r2, r0
	ldrb r0, [r1]
	mov r7, #0
	cmp r0, #31
	bls _080F700E
	mov r7, #2
_080F700E:
	ldr r3, _080F70CC  @ =0x0000097C
	add r0, r5, r3
	mov r4, #0
	mov r9, r4
	strb r7, [r0]
	ldr r2, _080F70D0  @ =0x0000097D
	add r0, r5, r2
	mov r3, r9
	strb r3, [r0]
	ldrb r0, [r1]
	lsr r0, r0, #1
	ldr r4, _080F70D4  @ =0x0000096C
	add r1, r5, r4
	strb r0, [r1]
	ldrb r6, [r1]
	ldr r0, _080F70D8  @ =gUnknown_08179B96
	add r0, r6, r0
	ldrb r0, [r0]
	sub r0, r0, #3
	ldr r2, _080F70DC  @ =0x000015E8
	add r1, r5, r2
	strb r0, [r1]
	ldr r0, _080F70E0  @ =gUnknown_08179BB6
	add r0, r6, r0
	ldrb r0, [r0]
	sub r0, r0, #18
	ldr r3, _080F70E4  @ =0x000015E9
	add r4, r5, r3
	strb r0, [r4]
	ldr r0, _080F70E8  @ =gUnknown_03003E74
	mov r8, r0
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r3, #150
	lsl r3, r3, #4
	add r2, r5, r3
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r2, _080F70EC  @ =0x00000964
	add r3, r5, r2
	mov r2, #0
	ldrsb r2, [r4, r2]
	ldrh r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080F70F0  @ =gUnknown_08179BD6
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r4, _080F70F4  @ =0x00000969
	add r5, r5, r4
	ldrb r5, [r5]
	mov r4, #49
	and r4, r4, r5
	ldr r5, _080F70F8  @ =gUnknown_08179BF6
	add r6, r6, r5
	ldrb r5, [r6]
	orr r4, r4, r5
	mov r5, #10
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, r9
	str r4, [sp]
	bl sub_080C6004
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, r7
	strh r0, [r1]
	mov r0, r10
	mov r1, #0
	mov r2, #0
	bl sub_080C6350
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
_080F70C4:
	.4byte gRam
_080F70C8:
	.4byte 0x00000FB2
_080F70CC:
	.4byte 0x0000097C
_080F70D0:
	.4byte 0x0000097D
_080F70D4:
	.4byte 0x0000096C
_080F70D8:
	.4byte gUnknown_08179B96
_080F70DC:
	.4byte 0x000015E8
_080F70E0:
	.4byte gUnknown_08179BB6
_080F70E4:
	.4byte 0x000015E9
_080F70E8:
	.4byte gUnknown_03003E74
_080F70EC:
	.4byte 0x00000964
_080F70F0:
	.4byte gUnknown_08179BD6
_080F70F4:
	.4byte 0x00000969
_080F70F8:
	.4byte gUnknown_08179BF6
	THUMB_FUNC_END sub_080F6FE8

