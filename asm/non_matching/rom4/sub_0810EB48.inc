	THUMB_FUNC_START sub_0810EB48
sub_0810EB48: @ 0x0810EB48
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810F024
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810EBF4
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810EB9C
	ldr r1, _0810EB90  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0810EB94  @ =gRam
	ldr r1, _0810EB98  @ =0x00000546
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #129
	lsl r1, r1, #7
	and r1, r1, r0
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	b _0810EB9E
	.byte 0x00
	.byte 0x00
_0810EB90:
	.4byte gUnknown_03003E70
_0810EB94:
	.4byte gRam
_0810EB98:
	.4byte 0x00000546
_0810EB9C:
	mov r0, #0
_0810EB9E:
	cmp r0, #0
	beq _0810EBF4
	ldr r0, _0810EBCC  @ =gCurrentHealth
	ldr r1, _0810EBD0  @ =gMaxHealth
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _0810EBC2
	bl sub_080AA868
	sub r0, r0, #10
	cmp r0, #0
	bge _0810EBD8
	add r0, r4, #0
	ldr r1, _0810EBD4  @ =0x0000017F
	mov r2, #0
	bl sub_080C9564
_0810EBC2:
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810EBF4
_0810EBCC:
	.4byte gCurrentHealth
_0810EBD0:
	.4byte gMaxHealth
_0810EBD4:
	.4byte 0x0000017F
_0810EBD8:
	mov r0, #10
	neg r0, r0
	bl sub_080AA83C
	ldr r0, _0810EBFC  @ =gRam
	ldr r1, _0810EC00  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #66
	bl sub_0810EF44
_0810EBF4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810EBFC:
	.4byte gRam
_0810EC00:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810EB48

