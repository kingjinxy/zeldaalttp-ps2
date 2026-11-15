	THUMB_FUNC_START sub_08079B8C
sub_08079B8C: @ 0x08079B8C
	push {r4,lr}
	ldr r1, _08079BD4  @ =gRam
	ldr r2, _08079BD8  @ =0x00000AB2
	add r0, r1, r2
	ldrh r0, [r0]
	lsr r2, r0, #1
	ldr r3, _08079BDC  @ =0x0000165C
	add r0, r1, r3
	ldrh r3, [r0]
	add r4, r1, #0
	cmp r3, #0
	bne _08079BEC
	ldr r1, _08079BE0  @ =gPendantCount
	ldr r0, _08079BE4  @ =gUnknown_0814CADC
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	bne _08079BB6
	b _08079CB2
_08079BB6:
	mov r1, #177
	lsl r1, r1, #4
	add r0, r4, r1
	mov r2, #0
	strh r3, [r0]
	add r1, r1, #240
	add r0, r4, r1
	strh r3, [r0]
	add r1, r1, #2
	add r0, r4, r1
	strh r3, [r0]
	ldr r3, _08079BE8  @ =0x000009AD
	add r1, r4, r3
	b _08079C34
	.byte 0x00
	.byte 0x00
_08079BD4:
	.4byte gRam
_08079BD8:
	.4byte 0x00000AB2
_08079BDC:
	.4byte 0x0000165C
_08079BE0:
	.4byte gPendantCount
_08079BE4:
	.4byte gUnknown_0814CADC
_08079BE8:
	.4byte 0x000009AD
_08079BEC:
	ldr r1, _08079C4C  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #205
	beq _08079C64
	cmp r0, #105
	beq _08079C64
	cmp r0, #173
	beq _08079C64
	cmp r0, #236
	beq _08079C64
	cmp r0, #138
	beq _08079C64
	ldr r1, _08079C50  @ =gCrystalCount
	ldr r0, _08079C54  @ =gUnknown_0814CADC
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _08079CB2
	mov r2, #177
	lsl r2, r2, #4
	add r0, r4, r2
	mov r2, #0
	mov r1, #0
	strh r1, [r0]
	mov r3, #192
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	strh r1, [r0]
	ldr r0, _08079C58  @ =0x000009AD
	add r1, r4, r0
_08079C34:
	mov r0, #5
	strb r0, [r1]
	ldr r1, _08079C5C  @ =0x0000097C
	add r0, r4, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	ldr r3, _08079C60  @ =0x000009E6
	add r1, r4, r3
	add r0, r0, r1
	strb r2, [r0]
	b _08079CB2
	.byte 0x00
	.byte 0x00
_08079C4C:
	.4byte 0x000009DA
_08079C50:
	.4byte gCrystalCount
_08079C54:
	.4byte gUnknown_0814CADC
_08079C58:
	.4byte 0x000009AD
_08079C5C:
	.4byte 0x0000097C
_08079C60:
	.4byte 0x000009E6
_08079C64:
	ldr r1, _08079CB8  @ =0x00000AA8
	add r0, r4, r1
	ldrh r1, [r0]
	mov r0, #128
	lsl r0, r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08079CB2
	mov r2, #177
	lsl r2, r2, #4
	add r0, r4, r2
	mov r2, #0
	mov r1, #0
	strh r1, [r0]
	mov r3, #192
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	strh r1, [r0]
	ldr r0, _08079CBC  @ =0x000009AD
	add r1, r4, r0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _08079CC0  @ =0x0000097C
	add r0, r4, r1
	mov r3, #0
	ldrsh r0, [r0, r3]
	ldr r3, _08079CC4  @ =0x000009E6
	add r1, r4, r3
	add r0, r0, r1
	strb r2, [r0]
	ldr r0, _08079CC8  @ =0x00000A3C
	add r1, r4, r0
	mov r0, #16
	strh r0, [r1]
	bl sub_080D5188
_08079CB2:
	pop {r4}
	pop {r0}
	bx r0
_08079CB8:
	.4byte 0x00000AA8
_08079CBC:
	.4byte 0x000009AD
_08079CC0:
	.4byte 0x0000097C
_08079CC4:
	.4byte 0x000009E6
_08079CC8:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_08079B8C

