	THUMB_FUNC_START sub_080D3250
sub_080D3250: @ 0x080D3250
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080D327C  @ =gRam
	ldr r1, _080D3280  @ =0x00001AE2
	add r0, r6, r1
	ldrb r5, [r0]
	cmp r5, #0
	beq _080D3288
	add r0, r4, #0
	mov r1, #223
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080D3284  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _080D32C2
_080D327C:
	.4byte gRam
_080D3280:
	.4byte 0x00001AE2
_080D3284:
	.4byte 0x00000F52
_080D3288:
	ldr r0, _080D32A4  @ =gSword
	ldrb r0, [r0]
	cmp r0, #2
	bls _080D32AC
	add r0, r4, #0
	mov r1, #222
	mov r2, sp
	bl sub_080C9564
	ldr r1, _080D32A8  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	b _080D32C2
_080D32A4:
	.4byte gSword
_080D32A8:
	.4byte 0x00000F52
_080D32AC:
	add r0, r7, #0
	mov r1, #221
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080D32CC  @ =0x00000F52
	add r1, r6, r0
	add r1, r7, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D32C2:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D32CC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D3250

