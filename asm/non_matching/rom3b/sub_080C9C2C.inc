	THUMB_FUNC_START sub_080C9C2C
sub_080C9C2C: @ 0x080C9C2C
	push {r4-r6,lr}
	ldr r2, _080C9C64  @ =gRam
	ldr r1, _080C9C68  @ =0x000009B2
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r1, r2, #0
	cmp r0, #0
	beq _080C9C58
	ldr r3, _080C9C6C  @ =0x000009AD
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C9C58
	cmp r0, #14
	beq _080C9C58
	ldr r3, _080C9C70  @ =0x00001647
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080C9C74
_080C9C58:
	ldr r0, _080C9C70  @ =0x00001647
	add r1, r1, r0
	mov r0, #0
	strb r0, [r1]
	b _080C9C9E
	.byte 0x00
	.byte 0x00
_080C9C64:
	.4byte gRam
_080C9C68:
	.4byte 0x000009B2
_080C9C6C:
	.4byte 0x000009AD
_080C9C70:
	.4byte 0x00001647
_080C9C74:
	mov r4, #15
	add r5, r2, #0
	ldr r1, _080C9CA4  @ =0x0000144C
	add r6, r5, r1
_080C9C7C:
	ldr r3, _080C9CA8  @ =0x000015DC
	add r0, r5, r3
	strb r4, [r0]
	add r0, r4, r6
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C9C90
	add r0, r4, #0
	bl sub_080C9CAC
_080C9C90:
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #128
	and r0, r0, r4
	cmp r0, #0
	beq _080C9C7C
_080C9C9E:
	pop {r4-r6}
	pop {r0}
	bx r0
_080C9CA4:
	.4byte 0x0000144C
_080C9CA8:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080C9C2C

