	THUMB_FUNC_START sub_081166E8
sub_081166E8: @ 0x081166E8
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r3, r0, #24
	cmp r3, #0
	bne _08116782
	ldr r1, _0811672C  @ =gRam
	mov r0, #184
	lsl r0, r0, #5
	add r2, r1, r0
	mov r0, #12
	strb r0, [r2]
	mov r2, sp
	ldr r4, _08116730  @ =0x00000E1F
	add r0, r1, r4
	ldrb r2, [r2]
	add r0, r0, r2
	strb r3, [r0]
	ldr r0, _08116734  @ =0x0000176C
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _08116738
	mov r0, #20
	bl sub_080C1A8C
	b _0811673E
_0811672C:
	.4byte gRam
_08116730:
	.4byte 0x00000E1F
_08116734:
	.4byte 0x0000176C
_08116738:
	mov r0, #21
	bl sub_080C1A8C
_0811673E:
	ldr r2, _0811678C  @ =gRam
	mov r1, sp
	ldr r3, _08116790  @ =0x00000E29
	add r0, r2, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	strb r1, [r0]
	mov r1, sp
	ldr r4, _08116794  @ =0x00001844
	add r0, r2, r4
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #7
	strb r1, [r0]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r2, r1
	ldrh r0, [r0]
	add r0, r0, #4
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	ldr r4, _08116798  @ =0x000016C4
	add r0, r2, r4
	ldrh r0, [r0]
	ldr r1, _0811679C  @ =0x00000964
	add r2, r2, r1
	strh r0, [r2]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_08116782:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811678C:
	.4byte gRam
_08116790:
	.4byte 0x00000E29
_08116794:
	.4byte 0x00001844
_08116798:
	.4byte 0x000016C4
_0811679C:
	.4byte 0x00000964
	THUMB_FUNC_END sub_081166E8

