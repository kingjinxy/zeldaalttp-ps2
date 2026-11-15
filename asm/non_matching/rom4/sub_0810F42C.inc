	THUMB_FUNC_START sub_0810F42C
sub_0810F42C: @ 0x0810F42C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_0810EE80
	add r5, r0, #0
	cmp r5, #0
	bne _0810F48E
	bl sub_080C99F8
	lsl r0, r0, #24
	cmp r0, #0
	bge _0810F452
	mov r1, #184
	lsl r1, r1, #1
	add r0, r4, #0
	b _0810F460
_0810F452:
	bl sub_080AA868
	sub r0, r0, #88
	cmp r0, #0
	bge _0810F474
	add r0, r4, #0
	ldr r1, _0810F470  @ =0x0000017F
_0810F460:
	mov r2, #0
	bl sub_080C9564
	add r0, r4, #0
	mov r1, #64
	bl sub_080CF0AC
	b _0810F48E
_0810F470:
	.4byte 0x0000017F
_0810F474:
	mov r0, #88
	neg r0, r0
	bl sub_080AA83C
	ldr r0, _0810F494  @ =gRam
	ldr r1, _0810F498  @ =0x00000FA2
	add r0, r0, r1
	add r0, r6, r0
	strb r5, [r0]
	add r0, r6, #0
	mov r1, #80
	bl sub_0810EF44
_0810F48E:
	pop {r4-r6}
	pop {r0}
	bx r0
_0810F494:
	.4byte gRam
_0810F498:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_0810F42C

