	THUMB_FUNC_START sub_0809CEA0
sub_0809CEA0: @ 0x0809CEA0
	push {r4,r5,lr}
	ldr r4, _0809CF4C  @ =gRam
	ldr r0, _0809CF50  @ =0x00001727
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	mov r1, #0
	strb r0, [r2]
	ldr r2, _0809CF54  @ =0x000016EA
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #79
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #111
	add r0, r4, r2
	strb r1, [r0]
	ldr r5, _0809CF58  @ =gSword
	ldrb r0, [r5]
	cmp r0, #255
	beq _0809CED4
	mov r0, #27
	mov r1, #1
	bl sub_080BEA28
_0809CED4:
	ldr r0, _0809CF5C  @ =gCurrentHealth
	ldrb r0, [r0]
	sub r0, r0, #4
	ldr r1, _0809CF60  @ =gMaxHealth
	ldrb r1, [r1]
	cmp r0, r1
	bge _0809CF18
	ldrb r2, [r5]
	add r1, r2, #1
	lsl r1, r1, #24
	mov r0, #254
	lsl r0, r0, #24
	and r0, r0, r1
	cmp r0, #0
	beq _0809CF18
	cmp r2, #1
	bls _0809CF18
	mov r1, #4
	ldr r0, _0809CF64  @ =0x00000E15
	add r2, r4, r0
_0809CEFC:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #49
	beq _0809CF18
	cmp r0, #68
	beq _0809CF18
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _0809CEFC
	mov r0, #0
	bl sub_080AE924
_0809CF18:
	ldr r0, _0809CF58  @ =gSword
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r2, #128
	lsl r2, r2, #18
	add r0, r0, r2
	lsr r0, r0, #24
	cmp r0, #1
	bls _0809CF3A
	ldr r0, _0809CF68  @ =gUnknown_0816809E
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r0, [r1]
	bl sub_0809E43C
_0809CF3A:
	ldr r0, _0809CF4C  @ =gRam
	ldr r1, _0809CF6C  @ =0x000016EB
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809CF4C:
	.4byte gRam
_0809CF50:
	.4byte 0x00001727
_0809CF54:
	.4byte 0x000016EA
_0809CF58:
	.4byte gSword
_0809CF5C:
	.4byte gCurrentHealth
_0809CF60:
	.4byte gMaxHealth
_0809CF64:
	.4byte 0x00000E15
_0809CF68:
	.4byte gUnknown_0816809E
_0809CF6C:
	.4byte 0x000016EB
	THUMB_FUNC_END sub_0809CEA0

