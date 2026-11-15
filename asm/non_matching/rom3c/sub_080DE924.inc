	THUMB_FUNC_START sub_080DE924
sub_080DE924: @ 0x080DE924
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080DEBF4
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080DE9BE
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_0810EFC0
	cmp r0, #0
	beq _080DE9BE
	ldr r1, _080DE978  @ =gUnknown_0816B588
	ldr r0, _080DE97C  @ =gBombUpgrades
	ldrb r0, [r0]
	add r0, r0, r1
	ldr r1, _080DE980  @ =gBombs
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080DE988
	ldr r1, _080DE984  @ =0x00000171
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	b _080DE9BE
_080DE978:
	.4byte gUnknown_0816B588
_080DE97C:
	.4byte gBombUpgrades
_080DE980:
	.4byte gBombs
_080DE984:
	.4byte 0x00000171
_080DE988:
	mov r0, #100
	bl sub_0810EF98
	cmp r0, #0
	bne _080DE99A
	add r0, r4, #0
	bl sub_0810F000
	b _080DE9BE
_080DE99A:
	ldr r1, _080DE9C8  @ =gBombFiller
	mov r0, #27
	strb r0, [r1]
	ldr r0, _080DE9CC  @ =gRam
	ldr r1, _080DE9D0  @ =0x00000FA2
	add r0, r0, r1
	add r0, r5, r0
	strb r6, [r0]
	mov r1, #142
	lsl r1, r1, #1
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
	add r0, r5, #0
	mov r1, #40
	bl sub_0810EF44
_080DE9BE:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE9C8:
	.4byte gBombFiller
_080DE9CC:
	.4byte gRam
_080DE9D0:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080DE924

