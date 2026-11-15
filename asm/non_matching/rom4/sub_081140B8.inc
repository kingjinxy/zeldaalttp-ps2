	THUMB_FUNC_START sub_081140B8
sub_081140B8: @ 0x081140B8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C3734
	ldr r3, _081140DC  @ =gRam
	ldr r0, _081140E0  @ =0x000016B5
	add r5, r3, r0
	ldrb r2, [r5]
	cmp r2, #11
	bne _081140E8
	ldr r1, _081140E4  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	strb r2, [r0]
	b _0811417A
	.byte 0x00
	.byte 0x00
_081140DC:
	.4byte gRam
_081140E0:
	.4byte 0x000016B5
_081140E4:
	.4byte 0x00000F52
_081140E8:
	ldr r0, _08114108  @ =gBugCatchingNet
	ldrb r0, [r0]
	cmp r0, #0
	beq _081140FE
	mov r0, #192
	lsl r0, r0, #18
	ldrb r1, [r0, #8]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _08114110
_081140FE:
	ldr r1, _0811410C  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #0
	b _08114178
_08114108:
	.4byte gBugCatchingNet
_0811410C:
	.4byte 0x00000F52
_08114110:
	cmp r2, #0
	bne _08114124
	ldr r1, _08114120  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #1
	b _08114178
	.byte 0x00
	.byte 0x00
_08114120:
	.4byte 0x00000F52
_08114124:
	ldr r0, _08114138  @ =0x000016B4
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #1
	bhi _08114140
	ldr r1, _0811413C  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #6
	b _08114178
_08114138:
	.4byte 0x000016B4
_0811413C:
	.4byte 0x00000F52
_08114140:
	ldrb r0, [r1]
	sub r0, r0, #2
	ldrb r2, [r5]
	sub r1, r2, #1
	cmp r0, r1
	beq _0811415C
	ldr r1, _08114158  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #7
	b _08114178
	.byte 0x00
	.byte 0x00
_08114158:
	.4byte 0x00000F52
_0811415C:
	cmp r2, #10
	bne _08114170
	ldr r1, _0811416C  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #8
	b _08114178
	.byte 0x00
	.byte 0x00
_0811416C:
	.4byte 0x00000F52
_08114170:
	ldr r1, _08114180  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #9
_08114178:
	strb r1, [r0]
_0811417A:
	pop {r4,r5}
	pop {r0}
	bx r0
_08114180:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_081140B8

