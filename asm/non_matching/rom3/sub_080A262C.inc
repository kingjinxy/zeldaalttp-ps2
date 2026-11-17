	THUMB_FUNC_START sub_080A262C
sub_080A262C: @ 0x080A262C
	push {r4,lr}
	ldr r1, _080A265C  @ =gUnknown_0200EE19
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080A2660  @ =gRam
	mov r1, #182
	lsl r1, r1, #5
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r0, _080A2664  @ =0x00000B17
	cmp r1, r0
	bhi _080A26C2
	bl GetRandomInt
	mov r2, #7
	and r2, r2, r0
	cmp r2, #7
	bhi _080A26C2
	lsl r0, r2, #2
	ldr r1, _080A2668  @ =0x080A266C
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
_080A265C:
	.4byte gUnknown_0200EE19
_080A2660:
	.4byte gRam
_080A2664:
	.4byte 0x00000B17
_080A2668:
	.4byte _080A2668+0x4
	.4byte _080A268C
	.4byte _080A268C
	.4byte _080A268C
	.4byte _080A268C
	.4byte _080A269C
	.4byte _080A26C2
	.4byte _080A26C2
	.4byte _080A26C2
_080A268C:
	ldr r0, _080A2698  @ =gUnknown_081690CC
	add r0, r2, r0
	ldrb r0, [r0]
	bl sub_080A24E0
	b _080A26C2
_080A2698:
	.4byte gUnknown_081690CC
_080A269C:
	ldr r0, _080A26C8  @ =gUnknown_0200EE19
	ldrb r0, [r0]
	cmp r0, #24
	bls _080A26C2
	ldr r4, _080A26CC  @ =gUnknown_0200EE18
	ldrb r0, [r4]
	cmp r0, #0
	bne _080A26C2
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _080A26C2
	mov r0, #235
	strb r0, [r4]
	mov r0, #235
	bl sub_080A24E0
_080A26C2:
	pop {r4}
	pop {r0}
	bx r0
_080A26C8:
	.4byte gUnknown_0200EE19
_080A26CC:
	.4byte gUnknown_0200EE18
	THUMB_FUNC_END sub_080A262C

