	THUMB_FUNC_START sub_08116614
sub_08116614: @ 0x08116614
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r5, r3, #0
	mov r1, #0
	mov r0, sp
	strb r1, [r0]
	ldr r4, _0811663C  @ =gRam
	ldr r1, _08116640  @ =0x000009AD
	add r0, r4, r1
	ldrb r2, [r0]
	cmp r2, #0
	beq _08116648
	ldr r2, _08116644  @ =0x00001626
	add r1, r4, r2
	mov r0, #3
	strb r0, [r1]
	b _081166D0
	.byte 0x00
	.byte 0x00
_0811663C:
	.4byte gRam
_08116640:
	.4byte 0x000009AD
_08116644:
	.4byte 0x00001626
_08116648:
	ldr r0, _08116670  @ =0x00000E29
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08116680
	ldr r1, _08116674  @ =0x00000A28
	add r0, r4, r1
	mov r1, #0
	strh r2, [r0]
	ldr r5, _08116678  @ =0x00000A2A
	add r0, r4, r5
	strh r2, [r0]
	ldr r2, _0811667C  @ =0x00000E15
	add r0, r4, r2
	add r0, r3, r0
	b _081166CE
_08116670:
	.4byte 0x00000E29
_08116674:
	.4byte 0x00000A28
_08116678:
	.4byte 0x00000A2A
_0811667C:
	.4byte 0x00000E15
_08116680:
	add r0, r5, #0
	mov r1, sp
	bl sub_080AF404
	mov r0, sp
	ldrb r0, [r0]
	cmp r0, #0
	bne _081166AC
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	ldrh r1, [r2]
	ldr r5, _081166A4  @ =0x00000A28
	add r0, r4, r5
	strh r1, [r0]
	ldr r0, _081166A8  @ =0x000016D7
	b _081166BC
	.byte 0x00
	.byte 0x00
_081166A4:
	.4byte 0x00000A28
_081166A8:
	.4byte 0x000016D7
_081166AC:
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	ldrh r1, [r2]
	ldr r5, _081166D8  @ =0x00000A2A
	add r0, r4, r5
	strh r1, [r0]
	ldr r0, _081166DC  @ =0x000016D6
_081166BC:
	add r1, r4, r0
	ldrb r0, [r2]
	ldrb r2, [r1]
	add r0, r0, r2
	strb r0, [r1]
	ldr r0, _081166E0  @ =gRam
	ldr r3, _081166E4  @ =0x00001626
	add r0, r0, r3
	mov r1, #3
_081166CE:
	strb r1, [r0]
_081166D0:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_081166D8:
	.4byte 0x00000A2A
_081166DC:
	.4byte 0x000016D6
_081166E0:
	.4byte gRam
_081166E4:
	.4byte 0x00001626
	THUMB_FUNC_END sub_08116614

