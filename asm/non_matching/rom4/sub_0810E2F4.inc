	THUMB_FUNC_START sub_0810E2F4
sub_0810E2F4: @ 0x0810E2F4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810E33C  @ =gRam
	ldr r1, _0810E340  @ =0x0000164C
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810E350
	ldr r2, _0810E344  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #7
	strb r1, [r0]
	add r0, r4, #0
	bl sub_0810F940
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810E324
	b _0810E43E
_0810E324:
	ldr r3, _0810E348  @ =0x00000F92
	add r2, r5, r3
	add r2, r4, r2
	ldr r1, _0810E34C  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	b _0810E384
	.byte 0x00
	.byte 0x00
_0810E33C:
	.4byte gRam
_0810E340:
	.4byte 0x0000164C
_0810E344:
	.4byte 0x00001122
_0810E348:
	.4byte 0x00000F92
_0810E34C:
	.4byte 0x00000996
_0810E350:
	add r0, r4, #0
	bl sub_080C6340
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810E43E
	ldr r2, _0810E414  @ =0x00001122
	add r3, r5, r2
	add r3, r4, r3
	ldr r1, _0810E418  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	lsl r1, r1, #3
	mov r0, #64
	and r1, r1, r0
	ldrb r2, [r3]
	mov r0, #63
	and r0, r0, r2
	orr r1, r1, r0
	strb r1, [r3]
_0810E384:
	add r0, r4, #0
	bl sub_080C5080
	ldr r2, _0810E41C  @ =gUnknown_0817D080
	ldr r1, _0810E420  @ =gRam
	ldr r3, _0810E424  @ =0x0000164C
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r6, [r0]
	ldr r0, _0810E428  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	cmp r0, #2
	beq _0810E3BE
	bl sub_0810F0E0
	cmp r0, #0
	beq _0810E3C0
	bl sub_080D1050
	cmp r0, #0
	bne _0810E3C0
	ldr r0, _0810E42C  @ =gUnknown_020023F2
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810E3C0
_0810E3BE:
	ldr r6, _0810E430  @ =0x000001A5
_0810E3C0:
	add r0, r4, #0
	add r1, r6, #0
	mov r2, #0
	bl sub_080C9164
	ldr r2, _0810E420  @ =gRam
	ldr r1, _0810E428  @ =0x00000F52
	add r0, r2, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _0810E43E
	ldr r3, _0810E434  @ =0x00001624
	add r0, r2, r3
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	add r1, r1, #96
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r3, r3, #155
	add r0, r2, r3
	mov r2, #0
	ldrsh r0, [r0, r2]
	cmp r1, r0
	blt _0810E43E
	add r0, r4, #0
	add r1, r6, #0
	mov r2, #0
	bl sub_080C9564
	ldr r0, _0810E430  @ =0x000001A5
	cmp r6, r0
	bne _0810E438
	ldr r0, _0810E42C  @ =gUnknown_020023F2
	mov r1, #1
	strb r1, [r0]
	mov r0, #2
	b _0810E43C
_0810E414:
	.4byte 0x00001122
_0810E418:
	.4byte 0x00000996
_0810E41C:
	.4byte gUnknown_0817D080
_0810E420:
	.4byte gRam
_0810E424:
	.4byte 0x0000164C
_0810E428:
	.4byte 0x00000F52
_0810E42C:
	.4byte gUnknown_020023F2
_0810E430:
	.4byte 0x000001A5
_0810E434:
	.4byte 0x00001624
_0810E438:
	ldrb r0, [r5]
	add r0, r0, #1
_0810E43C:
	strb r0, [r5]
_0810E43E:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810E2F4

