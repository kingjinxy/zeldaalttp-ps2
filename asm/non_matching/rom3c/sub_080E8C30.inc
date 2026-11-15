	THUMB_FUNC_START sub_080E8C30
sub_080E8C30: @ 0x080E8C30
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080E8808
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E8CCE
	ldr r6, _080E8C74  @ =gRam
	ldr r0, _080E8C78  @ =0x00001172
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080E8C7C  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	strb r1, [r2]
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E8C88
	ldr r2, _080E8C80  @ =0x00000F92
	add r1, r6, r2
	add r1, r4, r1
	ldr r2, _080E8C84  @ =gUnknown_08177948
	lsr r0, r0, #27
	add r0, r0, r2
	ldrb r0, [r0]
	b _080E8CCC
_080E8C74:
	.4byte gRam
_080E8C78:
	.4byte 0x00001172
_080E8C7C:
	.4byte 0x00000FC2
_080E8C80:
	.4byte 0x00000F92
_080E8C84:
	.4byte gUnknown_08177948
_080E8C88:
	ldr r0, _080E8CD4  @ =0x00001032
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #191
	and r0, r0, r2
	strb r0, [r1]
	add r0, r5, #0
	mov r1, #110
	bl sub_080CF0AC
	ldr r2, _080E8CD8  @ =0x00000F72
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E8CDC  @ =0x00001152
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E8CE0  @ =0x00000FB2
	add r1, r6, r2
	add r1, r5, r1
	strb r0, [r1]
	add r2, r2, #208
	add r1, r6, r2
	add r1, r5, r1
_080E8CCC:
	strb r0, [r1]
_080E8CCE:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E8CD4:
	.4byte 0x00001032
_080E8CD8:
	.4byte 0x00000F72
_080E8CDC:
	.4byte 0x00001152
_080E8CE0:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E8C30

