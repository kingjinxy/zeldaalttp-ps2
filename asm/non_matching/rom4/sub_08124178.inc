	THUMB_FUNC_START sub_08124178
sub_08124178: @ 0x08124178
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _081242C8  @ =gRam
	ldr r1, _081242CC  @ =0x00001791
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	ldr r2, _081242D0  @ =0x00001702
	add r1, r4, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	beq _08124196
	b _081242C0
_08124196:
	ldr r0, _081242D4  @ =gCrystalCount
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #127
	beq _081241A4
	b _081242C0
_081241A4:
	ldr r0, _081242D8  @ =gUnknown_020022C3
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _081241B2
	b _081242C0
_081241B2:
	bl sub_080AE75C
	mov r0, #67
	mov r1, sp
	bl sub_080AE588
	lsl r0, r0, #24
	cmp r0, #0
	bne _081242C0
	mov r0, #4
	mov r1, #67
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	bne _081242C0
	mov r1, #15
	add r5, r4, #0
	ldr r3, _081242DC  @ =0x00000FF2
	add r4, r5, r3
	ldr r0, _081242E0  @ =0x00000FA2
	add r3, r5, r0
	mov r2, #0
_081241E2:
	add r0, r1, r4
	ldrb r0, [r0]
	cmp r0, #55
	bne _081241EE
	add r0, r1, r3
	strb r2, [r0]
_081241EE:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bgt _081241E2
	mov r1, #0
	ldr r3, _081242E4  @ =gUnknown_020068B8
	mov r2, #255
_081241FE:
	add r0, r1, r3
	strb r2, [r0]
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #23
	bls _081241FE
	ldr r2, _081242E8  @ =0x00001732
	add r1, r5, r2
	mov r0, #40
	strb r0, [r1]
	bl sub_0812FBC4
	ldr r3, _081242EC  @ =0x00000CA9
	add r1, r5, r3
	mov r0, #4
	strb r0, [r1]
	mov r0, #202
	lsl r0, r0, #4
	add r2, r5, r0
	ldrb r0, [r2]
	mov r3, #128
	lsl r3, r3, #2
	add r1, r3, #0
	add r0, r0, r1
	mov r4, #0
	strh r0, [r2]
	bl sub_081331F4
	ldr r0, _081242F0  @ =0x0000099B
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r2, _081242F4  @ =0x00001770
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
	mov r1, sp
	ldr r3, _081242F8  @ =0x00000E01
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	ldr r2, _081242FC  @ =0x00000E0B
	add r0, r5, r2
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	mov r1, sp
	add r3, r3, #30
	add r0, r5, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r4, [r0]
	ldr r1, _08124300  @ =gUnknown_02006892
	mov r0, #240
	strb r0, [r1]
	ldr r0, _08124304  @ =gUnknown_02006880
	strb r4, [r0]
	add r0, r0, #8
	strb r4, [r0]
	sub r1, r1, #17
	mov r0, #10
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #22
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #32
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #42
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #54
	strb r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r5, r1
	ldrh r0, [r0]
	sub r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	strh r0, [r1]
	ldr r3, _08124308  @ =0x000016C4
	add r0, r5, r3
	ldrh r1, [r0]
	add r2, r2, #4
	add r0, r5, r2
	strh r1, [r0]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_081242C0:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_081242C8:
	.4byte gRam
_081242CC:
	.4byte 0x00001791
_081242D0:
	.4byte 0x00001702
_081242D4:
	.4byte gCrystalCount
_081242D8:
	.4byte gUnknown_020022C3
_081242DC:
	.4byte 0x00000FF2
_081242E0:
	.4byte 0x00000FA2
_081242E4:
	.4byte gUnknown_020068B8
_081242E8:
	.4byte 0x00001732
_081242EC:
	.4byte 0x00000CA9
_081242F0:
	.4byte 0x0000099B
_081242F4:
	.4byte 0x00001770
_081242F8:
	.4byte 0x00000E01
_081242FC:
	.4byte 0x00000E0B
_08124300:
	.4byte gUnknown_02006892
_08124304:
	.4byte gUnknown_02006880
_08124308:
	.4byte 0x000016C4
	THUMB_FUNC_END sub_08124178

