	THUMB_FUNC_START sub_08060124
sub_08060124: @ 0x08060124
	push {r4,r7,lr}
	sub sp, sp, #20
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #96]
	str r1, [r7, #4]
_08060132:
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, _080601C4  @ =gUnknown_0201EDB0
	ldr r2, [r7, #4]
	ldrh r3, [r2]
	mov r4, #15
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #16
	lsr r2, r3, #16
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, r2
	ldrh r2, [r1]
	strh r2, [r0]
	ldr r0, _080601C8  @ =gUnknown_08137B10
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	lsr r1, r2, #8
	add r2, r1, #0
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #16
	lsr r1, r2, #16
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	str r1, [r7, #16]
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	add r2, r7, #0
	add r2, r2, #10
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r1]
	strh r3, [r2]
	add r1, r1, #2
	str r1, [r0]
	add r2, r7, #0
	add r2, r2, #12
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r1]
	strh r3, [r2]
	add r1, r1, #2
	str r1, [r0]
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #10
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bcc _080601FC
	add r0, r7, #0
	add r0, r0, #8
	add r1, r7, #0
	add r1, r1, #12
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bls _080601CC
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	cmp r1, #0
	bne _080601F4
	b _080601CC
_080601C4:
	.4byte gUnknown_0201EDB0
_080601C8:
	.4byte gUnknown_08137B10
_080601CC:
	ldr r0, _080601F8  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _080601F8  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	ldr r1, [r7, #16]
	orr r2, r2, r1
	str r2, [r0]
_080601F4:
	b _08060226
	.byte 0x00
	.byte 0x00
_080601F8:
	.4byte gUnknown_0201F000
_080601FC:
	ldr r0, _08060234  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08060234  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r3, [r7, #16]
	mvn r2, r3
	ldr r1, [r1]
	and r2, r2, r1
	str r2, [r0]
_08060226:
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _08060238  @ =0x0000FFFF
	cmp r1, r0
	bne _0806023C
	b _0806023E
	.byte 0x00
	.byte 0x00
_08060234:
	.4byte gUnknown_0201F000
_08060238:
	.4byte 0x0000FFFF
_0806023C:
	b _08060132
_0806023E:
	add sp, sp, #20
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08060124

	.byte 0x00
	.byte 0x00
