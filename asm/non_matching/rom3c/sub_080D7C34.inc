	THUMB_FUNC_START sub_080D7C34
sub_080D7C34: @ 0x080D7C34
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _080D7C7C  @ =gRam
	ldr r1, _080D7C80  @ =0x00001062
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D7CBC
	ldr r2, _080D7C84  @ =0x00000D94
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #48
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080D83C8
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D7CF2
	ldr r1, _080D7C88  @ =0x000010C2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D7C8C
	add r0, r4, #0
	bl sub_080D8364
	b _080D7CF2
	.byte 0x00
	.byte 0x00
_080D7C7C:
	.4byte gRam
_080D7C80:
	.4byte 0x00001062
_080D7C84:
	.4byte 0x00000D94
_080D7C88:
	.4byte 0x000010C2
_080D7C8C:
	ldr r2, _080D7CB0  @ =0x00001172
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080D7CB4  @ =gUnknown_081756EC
	ldr r2, _080D7CB8  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080D7CF2
	.byte 0x00
	.byte 0x00
_080D7CB0:
	.4byte 0x00001172
_080D7CB4:
	.4byte gUnknown_081756EC
_080D7CB8:
	.4byte 0x00000F52
_080D7CBC:
	ldr r0, _080D7CF8  @ =0x00000D94
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r5, #0
	bl sub_080D808C
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D7CF2
	ldr r1, _080D7CFC  @ =gUnknown_081756F8
	ldr r2, _080D7D00  @ =0x00000F52
	add r0, r6, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080D7CF2:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D7CF8:
	.4byte 0x00000D94
_080D7CFC:
	.4byte gUnknown_081756F8
_080D7D00:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D7C34

