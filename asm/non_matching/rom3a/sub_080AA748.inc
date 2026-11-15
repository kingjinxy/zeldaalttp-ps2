	THUMB_FUNC_START sub_080AA748
sub_080AA748: @ 0x080AA748
	push {lr}
	mov r2, #0
	ldr r3, _080AA760  @ =gMaxHealth
	ldr r0, _080AA764  @ =gCurrentHealth
	ldrb r1, [r0]
	ldrb r0, [r3]
	cmp r0, r1
	bcs _080AA76C
	ldr r1, _080AA768  @ =gHeartsFiller
	mov r0, #160
	strb r0, [r1]
	b _080AA780
_080AA760:
	.4byte gMaxHealth
_080AA764:
	.4byte gCurrentHealth
_080AA768:
	.4byte gHeartsFiller
_080AA76C:
	strb r1, [r3]
	ldr r0, _080AA788  @ =gHeartsFiller
	strb r2, [r0]
	ldr r0, _080AA78C  @ =gRam
	ldr r1, _080AA790  @ =0x00000A56
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080AA780
	mov r2, #1
_080AA780:
	add r0, r2, #0
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080AA788:
	.4byte gHeartsFiller
_080AA78C:
	.4byte gRam
_080AA790:
	.4byte 0x00000A56
	THUMB_FUNC_END sub_080AA748

