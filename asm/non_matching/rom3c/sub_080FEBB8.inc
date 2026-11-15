	THUMB_FUNC_START sub_080FEBB8
sub_080FEBB8: @ 0x080FEBB8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r2, _080FECE0  @ =gRam
	ldr r3, _080FECE4  @ =0x00001082
	add r0, r2, r3
	add r0, r1, r0
	str r0, [sp]
	ldrb r0, [r0]
	sub r0, r0, #1
	ldr r2, [sp]
	strb r0, [r2]
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp, #4]
	cmp r0, #0
	bne _080FECD0
	mov r0, #64
	strb r0, [r2]
	mov r0, #138
	bl sub_080CA538
	add r7, r0, #0
	cmp r7, #0
	blt _080FECD0
	bl GetRandomInt
	mov r2, #31
	and r2, r2, r0
	cmp r2, #29
	bls _080FEC08
	add r0, r2, #0
	sub r0, r0, #30
	lsl r0, r0, #24
	lsr r2, r0, #24
_080FEC08:
	ldr r3, _080FECE0  @ =gRam
	ldr r0, _080FECE8  @ =0x00000EE2
	add r3, r3, r0
	mov r10, r3
	add r10, r10, r7
	ldr r0, _080FECEC  @ =gUnknown_0817AB70
	add r0, r2, r0
	ldrb r0, [r0]
	mov r1, r10
	strb r0, [r1]
	ldr r3, _080FECE0  @ =gRam
	ldr r1, _080FECF0  @ =0x00000F62
	add r3, r3, r1
	mov r8, r3
	add r8, r8, r7
	mov r3, r8
	strb r0, [r3]
	ldr r0, _080FECE0  @ =gRam
	sub r1, r1, #144
	add r0, r0, r1
	mov r9, r0
	add r9, r9, r7
	ldr r0, _080FECF4  @ =gUnknown_0817AB8E
	add r0, r2, r0
	ldrb r0, [r0]
	mov r3, r9
	strb r0, [r3]
	ldr r1, _080FECE0  @ =gRam
	ldr r3, _080FECF8  @ =0x00000F72
	add r6, r1, r3
	add r6, r7, r6
	sub r0, r0, #1
	strb r0, [r6]
	ldr r0, _080FECFC  @ =0x00000FB2
	add r1, r1, r0
	add r1, r7, r1
	ldr r0, _080FED00  @ =gUnknown_0817ABAC
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080FECE0  @ =gRam
	ldr r2, _080FED04  @ =0x00001062
	add r0, r1, r2
	add r0, r7, r0
	mov r3, #1
	strb r3, [r0]
	ldr r0, _080FED08  @ =0x00000F02
	add r1, r1, r0
	add r1, r7, r1
	ldr r2, _080FECE0  @ =gRam
	ldr r3, _080FED0C  @ =0x000015F4
	add r0, r2, r3
	ldrb r0, [r0]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080FED10  @ =0x00000EF2
	add r1, r2, r0
	add r1, r7, r1
	add r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080FED14  @ =0x00000F22
	add r5, r2, r0
	add r5, r7, r5
	mov r1, #1
	strb r1, [r5]
	lsl r4, r7, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C1F70
	add r0, r4, #0
	bl sub_080C6F48
	mov r2, sp
	ldrb r2, [r2, #4]
	strb r2, [r5]
	mov r3, r8
	ldrb r0, [r3]
	mov r1, r10
	strb r0, [r1]
	ldrb r0, [r6]
	mov r2, r9
	strb r0, [r2]
	ldr r3, _080FECE0  @ =gRam
	ldr r1, _080FED18  @ =0x00001042
	add r0, r3, r1
	add r0, r7, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080FECD0
	ldr r2, _080FED1C  @ =0x00000FA2
	add r0, r3, r2
	add r0, r7, r0
	strb r1, [r0]
	mov r0, #1
	ldr r3, [sp]
	strb r0, [r3]
_080FECD0:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080FECE0:
	.4byte gRam
_080FECE4:
	.4byte 0x00001082
_080FECE8:
	.4byte 0x00000EE2
_080FECEC:
	.4byte gUnknown_0817AB70
_080FECF0:
	.4byte 0x00000F62
_080FECF4:
	.4byte gUnknown_0817AB8E
_080FECF8:
	.4byte 0x00000F72
_080FECFC:
	.4byte 0x00000FB2
_080FED00:
	.4byte gUnknown_0817ABAC
_080FED04:
	.4byte 0x00001062
_080FED08:
	.4byte 0x00000F02
_080FED0C:
	.4byte 0x000015F4
_080FED10:
	.4byte 0x00000EF2
_080FED14:
	.4byte 0x00000F22
_080FED18:
	.4byte 0x00001042
_080FED1C:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FEBB8

