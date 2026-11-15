	THUMB_FUNC_START sub_080CA32C
sub_080CA32C: @ 0x080CA32C
	push {r4-r6,lr}
	ldr r2, _080CA354  @ =gRam
	ldr r0, _080CA358  @ =0x00000961
	add r6, r2, r0
	ldrb r4, [r6]
	lsl r3, r4, #24
	asr r1, r3, #30
	mov r0, #2
	and r1, r1, r0
	mov r5, #150
	lsl r5, r5, #4
	add r0, r2, r5
	ldrb r0, [r0]
	lsr r0, r0, #7
	orr r1, r1, r0
	lsl r5, r1, #3
	cmp r3, #0
	blt _080CA35C
	ldrb r3, [r6]
	b _080CA362
_080CA354:
	.4byte gRam
_080CA358:
	.4byte 0x00000961
_080CA35C:
	neg r0, r4
	lsl r0, r0, #24
	lsr r3, r0, #24
_080CA362:
	mov r0, #150
	lsl r0, r0, #4
	add r2, r2, r0
	ldrb r1, [r2]
	mov r0, #0
	ldrsb r0, [r2, r0]
	cmp r0, #0
	blt _080CA376
	ldrb r0, [r2]
	b _080CA37C
_080CA376:
	neg r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
_080CA37C:
	cmp r3, r0
	bcs _080CA38C
	ldr r1, _080CA388  @ =gUnknown_08172825
	lsr r0, r3, #2
	b _080CA390
	.byte 0x00
	.byte 0x00
_080CA388:
	.4byte gUnknown_08172825
_080CA38C:
	ldr r1, _080CA39C  @ =gUnknown_08172805
	lsr r0, r0, #2
_080CA390:
	add r0, r0, r5
	add r0, r0, r1
	ldrb r0, [r0]
	pop {r4-r6}
	pop {r1}
	bx r1
_080CA39C:
	.4byte gUnknown_08172805
	THUMB_FUNC_END sub_080CA32C

