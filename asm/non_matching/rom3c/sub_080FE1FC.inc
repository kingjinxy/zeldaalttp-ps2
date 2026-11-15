	THUMB_FUNC_START sub_080FE1FC
sub_080FE1FC: @ 0x080FE1FC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080FED20
	ldr r5, _080FE2FC  @ =gRam
	ldr r1, _080FE300  @ =0x00000FA2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	bne _080FE220
	ldr r2, _080FE304  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080FE220:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080FE2F4
	ldr r1, _080FE308  @ =0x00001032
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	mov r3, #191
	and r3, r3, r0
	strb r3, [r2]
	add r1, r1, #128
	add r0, r5, r1
	add r7, r4, r0
	ldrb r0, [r7]
	cmp r0, #0
	beq _080FE250
	mov r1, #64
	add r0, r3, #0
	orr r0, r0, r1
	strb r0, [r2]
_080FE250:
	ldr r2, _080FE30C  @ =0x00001072
	add r0, r5, r2
	add r2, r4, r0
	ldrb r1, [r2]
	cmp r1, #0
	beq _080FE286
	mov r0, #127
	and r0, r0, r1
	cmp r0, #6
	bne _080FE286
	strb r6, [r2]
	mov r0, #32
	strb r0, [r7]
	ldr r1, _080FE304  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r2, _080FE310  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	strb r6, [r0]
	ldr r1, _080FE314  @ =0x000010A2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
_080FE286:
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FE2F4
	mov r1, #0
	ldr r3, _080FE2FC  @ =gRam
	ldr r2, _080FE318  @ =0x000009DA
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FE2A2
	mov r1, #1
_080FE2A2:
	cmp r1, #0
	beq _080FE2DC
	cmp r4, #0
	bne _080FE2DC
	ldr r1, _080FE304  @ =0x00000F52
	add r0, r3, r1
	ldrb r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080FE2DC
	mov r1, #0
	mov r2, #0
	ldr r0, _080FE31C  @ =0x00000FF2
	add r3, r3, r0
_080FE2C2:
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #136
	bne _080FE2CC
	add r2, r2, #1
_080FE2CC:
	add r1, r1, #1
	cmp r1, #15
	ble _080FE2C2
	cmp r2, #1
	bne _080FE2DC
	add r0, r4, #0
	bl sub_080FEF7C
_080FE2DC:
	ldr r1, _080FE320  @ =gUnknown_0817AB38
	ldr r0, _080FE2FC  @ =gRam
	ldr r2, _080FE304  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080FE2F4:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FE2FC:
	.4byte gRam
_080FE300:
	.4byte 0x00000FA2
_080FE304:
	.4byte 0x00000F52
_080FE308:
	.4byte 0x00001032
_080FE30C:
	.4byte 0x00001072
_080FE310:
	.4byte 0x00000FC2
_080FE314:
	.4byte 0x000010A2
_080FE318:
	.4byte 0x000009DA
_080FE31C:
	.4byte 0x00000FF2
_080FE320:
	.4byte gUnknown_0817AB38
	THUMB_FUNC_END sub_080FE1FC

