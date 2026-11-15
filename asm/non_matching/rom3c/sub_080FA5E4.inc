	THUMB_FUNC_START sub_080FA5E4
sub_080FA5E4: @ 0x080FA5E4
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080FA63C  @ =gRam
	ldr r1, _080FA640  @ =0x00001AE2
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FA602
	mov r0, #10
	bl sub_0810EF98
	cmp r0, #0
	bne _080FA654
_080FA602:
	ldr r1, _080FA644  @ =0x00000123
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
	mov r0, #188
	lsl r0, r0, #5
	add r2, r4, r0
	ldrh r1, [r2]
	mov r0, #252
	and r0, r0, r1
	mov r1, #0
	strh r0, [r2]
	ldr r2, _080FA648  @ =0x00001663
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080FA64C  @ =0x00000F52
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _080FA650  @ =0x00001770
	add r1, r4, r2
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080FA678
	.byte 0x00
	.byte 0x00
_080FA63C:
	.4byte gRam
_080FA640:
	.4byte 0x00001AE2
_080FA644:
	.4byte 0x00000123
_080FA648:
	.4byte 0x00001663
_080FA64C:
	.4byte 0x00000F52
_080FA650:
	.4byte 0x00001770
_080FA654:
	mov r1, #145
	lsl r1, r1, #1
	add r0, r5, #0
	mov r2, sp
	bl sub_080C9564
	mov r0, #188
	lsl r0, r0, #5
	add r2, r4, r0
	ldrh r1, [r2]
	mov r0, #3
	mov r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldr r1, _080FA680  @ =0x00000FA2
	add r0, r4, r1
	add r0, r5, r0
	strb r3, [r0]
_080FA678:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080FA680:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080FA5E4

