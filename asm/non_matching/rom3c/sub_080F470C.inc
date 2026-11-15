	THUMB_FUNC_START sub_080F470C
sub_080F470C: @ 0x080F470C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F477C  @ =gRam
	ldr r1, _080F4780  @ =0x00000F52
	add r0, r5, r1
	add r2, r4, r0
	ldrb r3, [r2]
	add r6, r3, #1
	strb r6, [r2]
	ldr r1, _080F4784  @ =0x000009C6
	add r0, r5, r1
	ldrh r0, [r0]
	ldr r1, _080F4788  @ =gUnknown_02002280
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080F47D4
	ldr r0, _080F478C  @ =gUnknown_0200EE1F
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F4756
	ldr r0, _080F4790  @ =gUnknown_0200EE1E
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F4756
	ldr r0, _080F4794  @ =gUnknown_0200EE1D
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F4756
	ldr r0, _080F4798  @ =gUnknown_0200EE1C
	ldrb r0, [r0]
	cmp r0, #15
	bls _080F47A4
_080F4756:
	add r0, r4, #0
	mov r1, #209
	mov r2, sp
	bl sub_080C9564
	ldr r2, _080F477C  @ =gRam
	ldr r1, _080F479C  @ =0x00001082
	add r0, r2, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080F47A0  @ =0x00000FB2
	add r2, r2, r0
	add r2, r4, r2
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r2]
	b _080F47E2
_080F477C:
	.4byte gRam
_080F4780:
	.4byte 0x00000F52
_080F4784:
	.4byte 0x000009C6
_080F4788:
	.4byte gUnknown_02002280
_080F478C:
	.4byte gUnknown_0200EE1F
_080F4790:
	.4byte gUnknown_0200EE1E
_080F4794:
	.4byte gUnknown_0200EE1D
_080F4798:
	.4byte gUnknown_0200EE1C
_080F479C:
	.4byte 0x00001082
_080F47A0:
	.4byte 0x00000FB2
_080F47A4:
	add r0, r6, #1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #208
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080F47CC  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080F47D0  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	b _080F47E2
_080F47CC:
	.4byte 0x00001082
_080F47D0:
	.4byte 0x00000FB2
_080F47D4:
	add r0, r3, #3
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #210
	mov r2, sp
	bl sub_080C9564
_080F47E2:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F470C

	.byte 0x00
	.byte 0x00
