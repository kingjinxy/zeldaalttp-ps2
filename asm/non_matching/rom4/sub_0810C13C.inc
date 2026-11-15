	THUMB_FUNC_START sub_0810C13C
sub_0810C13C: @ 0x0810C13C
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _0810C174  @ =gRam
	ldr r2, _0810C178  @ =0x00000FC2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r6, r1, #0
	cmp r0, #1
	bne _0810C184
	mov r1, #0
	ldr r2, _0810C17C  @ =0x000009DA
	add r0, r6, r2
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810C162
	mov r1, #1
_0810C162:
	cmp r1, #0
	beq _0810C184
	ldr r1, _0810C180  @ =0x00000FD2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #192
	strb r1, [r0]
	b _0810C1EC
	.byte 0x00
	.byte 0x00
_0810C174:
	.4byte gRam
_0810C178:
	.4byte 0x00000FC2
_0810C17C:
	.4byte 0x000009DA
_0810C180:
	.4byte 0x00000FD2
_0810C184:
	add r5, r6, #0
	ldr r2, _0810C1F4  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _0810C1EC
	add r2, r2, #112
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_Move
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	add r0, r4, #0
	bl sub_0810C208
	mov r1, #0
	ldr r2, _0810C1F8  @ =0x000009DA
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #205
	bne _0810C1BC
	mov r1, #1
_0810C1BC:
	cmp r1, #0
	beq _0810C1EC
	ldr r1, _0810C1FC  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #0
	bne _0810C1D4
	add r0, r4, #0
	bl sub_0810C990
_0810C1D4:
	ldr r2, _0810C200  @ =0x00000FD2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810C1EC
	ldr r0, _0810C204  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810C1EC:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_0810C1F4:
	.4byte 0x00000FC2
_0810C1F8:
	.4byte 0x000009DA
_0810C1FC:
	.4byte 0x00000996
_0810C200:
	.4byte 0x00000FD2
_0810C204:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_0810C13C

