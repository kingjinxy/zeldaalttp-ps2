	THUMB_FUNC_START sub_080B31BC
sub_080B31BC: @ 0x080B31BC
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r3, _080B320C  @ =gUnknown_020022BB
	ldrb r2, [r3]
	mov r1, #223
	add r0, r1, #0
	and r0, r0, r2
	strb r0, [r3]
	ldr r2, _080B3210  @ =gUnknown_020022FB
	ldrb r0, [r2]
	and r1, r1, r0
	strb r1, [r2]
	sub r2, r2, #229
	ldrh r1, [r2]
	ldr r0, _080B3214  @ =0x0000FF7F
	and r0, r0, r1
	strh r0, [r2]
	ldr r2, _080B3218  @ =gUnknown_02002050
	ldrh r1, [r2]
	ldr r0, _080B321C  @ =0x0000FEFF
	and r0, r0, r1
	strh r0, [r2]
	bl sub_080787DC
	bl sub_08078804
	ldr r0, _080B3220  @ =gRam
	ldr r1, _080B3224  @ =0x000009C6
	add r0, r0, r1
	ldrh r0, [r0]
	mov r1, #191
	and r1, r1, r0
	cmp r1, #5
	beq _080B322C
	cmp r1, #5
	bgt _080B3228
	cmp r1, #3
	beq _080B322C
	b _080B3230
	.byte 0x00
	.byte 0x00
_080B320C:
	.4byte gUnknown_020022BB
_080B3210:
	.4byte gUnknown_020022FB
_080B3214:
	.4byte 0x0000FF7F
_080B3218:
	.4byte gUnknown_02002050
_080B321C:
	.4byte 0x0000FEFF
_080B3220:
	.4byte gRam
_080B3224:
	.4byte 0x000009C6
_080B3228:
	cmp r1, #7
	bne _080B3230
_080B322C:
	mov r0, #88
	b _080B3232
_080B3230:
	mov r0, #90
_080B3232:
	bl sub_0812FD88
	bl sub_08130AB4
	ldr r5, _080B32C4  @ =gRam
	mov r3, #202
	lsl r3, r3, #4
	add r0, r5, r3
	ldrb r1, [r0]
	mov r2, #0
	mov r4, #0
	strh r1, [r0]
	ldr r1, _080B32C8  @ =0x00000CAA
	add r0, r5, r1
	strb r2, [r0]
	bl sub_0812E8DC
	bl sub_080AA7FC
	str r4, [sp]
	ldr r1, _080B32CC  @ =gUnknown_02000C00
	ldr r2, _080B32D0  @ =0x01000100
	mov r0, sp
	bl CpuFastSet
	ldr r3, _080B32D4  @ =0x0000099B
	add r1, r5, r3
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080B32D8  @ =0x00000A4C
	add r1, r5, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	ldr r1, _080B32DC  @ =0x000009EA
	add r2, r5, r1
	ldrh r1, [r2]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	strh r0, [r2]
	bl sub_0807438C
	mov r0, #66
	mov r1, #0
	bl sub_0812A324
	mov r2, #7
	ldr r3, _080B32E0  @ =0x000009C6
	add r0, r5, r3
	ldrh r1, [r0]
	mov r0, #191
	and r0, r0, r1
	cmp r0, #24
	bne _080B32AE
	ldr r1, _080B32E4  @ =0x0000165E
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #2
	bhi _080B32AE
	mov r2, #8
_080B32AE:
	ldr r1, _080B32C4  @ =gRam
	ldr r3, _080B32E8  @ =0x00000A42
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r2, r0
	bne _080B32F4
	ldr r0, _080B32EC  @ =0x00000A3C
	add r1, r1, r0
	ldr r0, _080B32F0  @ =0x0000FFF3
	strh r0, [r1]
	b _080B32FA
_080B32C4:
	.4byte gRam
_080B32C8:
	.4byte 0x00000CAA
_080B32CC:
	.4byte gUnknown_02000C00
_080B32D0:
	.4byte 0x01000100
_080B32D4:
	.4byte 0x0000099B
_080B32D8:
	.4byte 0x00000A4C
_080B32DC:
	.4byte 0x000009EA
_080B32E0:
	.4byte 0x000009C6
_080B32E4:
	.4byte 0x0000165E
_080B32E8:
	.4byte 0x00000A42
_080B32EC:
	.4byte 0x00000A3C
_080B32F0:
	.4byte 0x0000FFF3
_080B32F4:
	ldr r3, _080B3304  @ =0x00000A3C
	add r0, r1, r3
	strh r2, [r0]
_080B32FA:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B3304:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_080B31BC

