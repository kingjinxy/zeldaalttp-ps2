	THUMB_FUNC_START sub_080FD888
sub_080FD888: @ 0x080FD888
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080FD904  @ =gRam
	ldr r2, _080FD908  @ =0x00000AB2
	add r0, r1, r2
	ldrb r0, [r0]
	sub r0, r0, #10
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #2
	bne _080FD8B2
	mov r0, #179
	lsl r0, r0, #5
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #6
	bhi _080FD8B2
	mov r0, #7
	strb r0, [r1]
_080FD8B2:
	cmp r2, #14
	bne _080FD8C4
	ldr r0, _080FD90C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #127
	beq _080FD8C4
	mov r2, #16
_080FD8C4:
	ldr r1, _080FD910  @ =gUnknown_0817A9EC
	lsr r0, r2, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r1, [r0]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r2, _080FD904  @ =gRam
	ldr r0, _080FD914  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080FD90C  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #127
	bne _080FD8FA
	mov r0, #179
	lsl r0, r0, #5
	add r1, r2, r0
	mov r0, #8
	strb r0, [r1]
_080FD8FA:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FD904:
	.4byte gRam
_080FD908:
	.4byte 0x00000AB2
_080FD90C:
	.4byte gCrystalCount
_080FD910:
	.4byte gUnknown_0817A9EC
_080FD914:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FD888

