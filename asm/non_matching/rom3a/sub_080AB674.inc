	THUMB_FUNC_START sub_080AB674
sub_080AB674: @ 0x080AB674
	push {r4-r6,lr}
	ldr r0, _080AB6C0  @ =gRam
	ldr r1, _080AB6C4  @ =0x00000B6D
	add r2, r0, r1
	mov r1, #0
	strb r1, [r2]
	add r5, r0, #0
	mov r6, #128
	lsl r6, r6, #8
	add r4, r2, #0
	ldr r3, _080AB6C8  @ =0x0000199C
	add r2, r5, r3
	mov r3, #2
_080AB68E:
	ldrh r1, [r2]
	add r0, r6, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080AB69E
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080AB69E:
	add r2, r2, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _080AB68E
	add r1, r5, #0
	ldr r2, _080AB6C4  @ =0x00000B6D
	add r0, r1, r2
	ldrb r2, [r0]
	cmp r2, #0
	bne _080AB6D4
	ldr r3, _080AB6CC  @ =0x000009B5
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080AB6D0  @ =0x000009D4
	add r1, r1, r0
	mov r0, #179
	b _080AB6FA
_080AB6C0:
	.4byte gRam
_080AB6C4:
	.4byte 0x00000B6D
_080AB6C8:
	.4byte 0x0000199C
_080AB6CC:
	.4byte 0x000009B5
_080AB6D0:
	.4byte 0x000009D4
_080AB6D4:
	cmp r2, #1
	bne _080AB6EC
	ldr r3, _080AB6E4  @ =0x000009B5
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _080AB6E8  @ =0x000009D4
	add r1, r1, r0
	b _080AB6F8
_080AB6E4:
	.4byte 0x000009B5
_080AB6E8:
	.4byte 0x000009D4
_080AB6EC:
	ldr r2, _080AB704  @ =0x000009B5
	add r1, r5, r2
	mov r0, #0
	strb r0, [r1]
	ldr r3, _080AB708  @ =0x000009D4
	add r1, r5, r3
_080AB6F8:
	mov r0, #112
_080AB6FA:
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AB704:
	.4byte 0x000009B5
_080AB708:
	.4byte 0x000009D4
	THUMB_FUNC_END sub_080AB674

