	THUMB_FUNC_START sub_0805CECC
sub_0805CECC: @ 0x0805CECC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805CEF8  @ =gUnknown_08137B10
	ldr r1, _0805CEFC  @ =gUnknown_03006C80
	ldrb r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	ldr r1, [r0]
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _0805CF00
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805CF56
_0805CEF8:
	.4byte gUnknown_08137B10
_0805CEFC:
	.4byte gUnknown_03006C80
_0805CF00:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	mov r1, #128
	str r1, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, _0805CF60  @ =gUnknown_081412CC
	str r1, [r0, #72]
	ldr r0, [r7]
	bl sub_0805D3DC
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	ldr r0, _0805CF64  @ =gUnknown_0814127C
	ldr r1, _0805CF68  @ =gUnknown_03006C80
	ldrb r2, [r1, #1]
	add r1, r2, #0
	lsl r2, r1, #1
	add r0, r0, r2
	ldrh r1, [r0]
	ldr r0, [r7]
	bl sub_0802C070
_0805CF56:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805CF60:
	.4byte gUnknown_081412CC
_0805CF64:
	.4byte gUnknown_0814127C
_0805CF68:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0805CECC

