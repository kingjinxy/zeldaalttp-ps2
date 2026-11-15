	THUMB_FUNC_START sub_080A24E0
sub_080A24E0: @ 0x080A24E0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	mov r1, #0
	bl sub_080CA538
	lsl r0, r0, #24
	lsr r4, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bge _080A24FA
	b _080A25FE
_080A24FA:
	ldr r0, _080A2528  @ =gRam
	ldr r2, _080A252C  @ =0x000016D5
	add r1, r0, r2
	ldrb r1, [r1]
	lsr r5, r1, #1
	add r7, r0, #0
	cmp r5, #1
	bls _080A253C
	ldr r0, _080A2530  @ =0x00000F22
	add r1, r7, r0
	add r1, r3, r1
	ldr r2, _080A2534  @ =gUnknown_081690CA
	sub r0, r5, #2
	add r0, r0, r2
	ldrb r0, [r0]
	mov r2, #0
	strb r0, [r1]
	ldr r1, _080A2538  @ =0x00000F12
	add r0, r7, r1
	add r0, r3, r0
	strb r2, [r0]
	b _080A2554
	.byte 0x00
	.byte 0x00
_080A2528:
	.4byte gRam
_080A252C:
	.4byte 0x000016D5
_080A2530:
	.4byte 0x00000F22
_080A2534:
	.4byte gUnknown_081690CA
_080A2538:
	.4byte 0x00000F12
_080A253C:
	ldr r2, _080A2568  @ =0x00000F22
	add r0, r7, r2
	add r0, r3, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080A256C  @ =0x00000F12
	add r1, r7, r0
	add r1, r3, r1
	ldr r0, _080A2570  @ =gUnknown_081690CA
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r1]
_080A2554:
	cmp r6, #216
	bne _080A2578
	lsl r2, r4, #24
	asr r0, r2, #24
	ldr r3, _080A2574  @ =0x00001152
	add r1, r7, r3
	add r0, r0, r1
	mov r1, #12
	b _080A2584
	.byte 0x00
	.byte 0x00
_080A2568:
	.4byte 0x00000F22
_080A256C:
	.4byte 0x00000F12
_080A2570:
	.4byte gUnknown_081690CA
_080A2574:
	.4byte 0x00001152
_080A2578:
	lsl r2, r4, #24
	asr r0, r2, #24
	ldr r4, _080A2604  @ =0x00001152
	add r1, r7, r4
	add r0, r0, r1
	mov r1, #24
_080A2584:
	strb r1, [r0]
	asr r3, r2, #24
	ldr r1, _080A2608  @ =0x00000D74
	add r0, r7, r1
	add r0, r3, r0
	mov r1, #255
	strb r1, [r0]
	ldr r2, _080A260C  @ =0x000010E2
	add r0, r7, r2
	add r0, r3, r0
	mov r6, #0
	mov r1, #48
	strb r1, [r0]
	ldr r0, _080A2610  @ =0x000016C4
	add r4, r7, r0
	ldr r0, _080A2614  @ =gUnknown_081681D4
	add r2, r5, #0
	add r2, r2, #8
	lsl r2, r2, #1
	add r0, r2, r0
	ldrh r1, [r0]
	ldrh r4, [r4]
	add r1, r1, r4
	mov r4, #16
	neg r4, r4
	add r5, r4, #0
	and r1, r1, r5
	ldr r4, _080A2618  @ =0x00000EE2
	add r0, r7, r4
	add r0, r3, r0
	strb r1, [r0]
	add r4, r4, #32
	add r0, r7, r4
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	mov r0, #182
	lsl r0, r0, #5
	add r4, r7, r0
	ldr r0, _080A261C  @ =gUnknown_0816817C
	add r2, r2, r0
	ldrh r1, [r2]
	ldrh r4, [r4]
	add r1, r1, r4
	and r1, r1, r5
	ldr r2, _080A2620  @ =0x00000ED2
	add r0, r7, r2
	add r0, r3, r0
	strb r1, [r0]
	ldr r4, _080A2624  @ =0x00000EF2
	add r0, r7, r4
	add r0, r3, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080A2628  @ =0x000010F2
	add r0, r7, r1
	add r3, r3, r0
	strb r6, [r3]
	mov r0, #94
	bl sub_0809E43C
_080A25FE:
	pop {r4-r7}
	pop {r0}
	bx r0
_080A2604:
	.4byte 0x00001152
_080A2608:
	.4byte 0x00000D74
_080A260C:
	.4byte 0x000010E2
_080A2610:
	.4byte 0x000016C4
_080A2614:
	.4byte gUnknown_081681D4
_080A2618:
	.4byte 0x00000EE2
_080A261C:
	.4byte gUnknown_0816817C
_080A2620:
	.4byte 0x00000ED2
_080A2624:
	.4byte 0x00000EF2
_080A2628:
	.4byte 0x000010F2
	THUMB_FUNC_END sub_080A24E0

