	THUMB_FUNC_START sub_0810EC04
sub_0810EC04: @ 0x0810EC04
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810F024
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810ECCC
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810EC58
	ldr r1, _0810EC4C  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810EC50  @ =gRam
	ldr r1, _0810EC54  @ =0x00000546
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810EC5A
	.byte 0x00
	.byte 0x00
_0810EC4C:
	.4byte gUnknown_03003E70
_0810EC50:
	.4byte gRam
_0810EC54:
	.4byte 0x00000546
_0810EC58:
	mov r0, #0
_0810EC5A:
	cmp r0, #0
	beq _0810ECCC
	ldr r1, _0810EC7C  @ =gUnknown_0816B598
	ldr r0, _0810EC80  @ =gArrowUpgrades
	ldrb r0, [r0]
	add r0, r0, r1
	ldr r1, _0810EC84  @ =gArrowCount
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0810EC8C
	ldr r1, _0810EC88  @ =0x00000171
	add r0, r4, #0
	mov r2, #0
	bl sub_080C9164
	b _0810ECA0
_0810EC7C:
	.4byte gUnknown_0816B598
_0810EC80:
	.4byte gArrowUpgrades
_0810EC84:
	.4byte gArrowCount
_0810EC88:
	.4byte 0x00000171
_0810EC8C:
	bl sub_080AA868
	sub r0, r0, #30
	cmp r0, #0
	bge _0810ECB0
	add r0, r4, #0
	ldr r1, _0810ECAC  @ =0x0000017F
	mov r2, #0
	bl sub_080C9564
_0810ECA0:
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810ECCC
	.byte 0x00
	.byte 0x00
_0810ECAC:
	.4byte 0x0000017F
_0810ECB0:
	mov r0, #30
	neg r0, r0
	bl sub_080AA83C
	ldr r0, _0810ECD4  @ =gRam
	ldr r1, _0810ECD8  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #68
	bl sub_0810EF44
_0810ECCC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810ECD4:
	.4byte gRam
_0810ECD8:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810EC04

