	THUMB_FUNC_START sub_080E2684
sub_080E2684: @ 0x080E2684
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080E26B8  @ =gRam
	ldr r1, _080E26BC  @ =0x00001032
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080E26B0
	ldr r1, _080E26C0  @ =gUnknown_08176A54
	ldr r4, _080E26C4  @ =0x00000FB2
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, r2, #0
	bl sub_080C57F8
_080E26B0:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E26B8:
	.4byte gRam
_080E26BC:
	.4byte 0x00001032
_080E26C0:
	.4byte gUnknown_08176A54
_080E26C4:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E2684

