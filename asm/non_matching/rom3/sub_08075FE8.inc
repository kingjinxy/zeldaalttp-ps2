	THUMB_FUNC_START sub_08075FE8
sub_08075FE8: @ 0x08075FE8
	push {r4,lr}
	ldr r2, _08076030  @ =gRam
	ldr r0, _08076034  @ =0x00000B98
	add r3, r2, r0
	ldr r4, _08076038  @ =0x000009BE
	add r1, r2, r4
	ldrh r0, [r3]
	ldrh r4, [r1]
	cmp r0, r4
	beq _08075FFE
	b _080760F4
_08075FFE:
	ldr r1, _0807603C  @ =0x000009BA
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08076060
	ldr r0, _08076040  @ =gUnknown_02018000
	ldr r1, _08076044  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076048  @ =gUnknown_02019000
	ldr r1, _0807604C  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076050  @ =gUnknown_02020000
	ldr r1, _08076054  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076058  @ =gUnknown_02021000
	ldr r1, _0807605C  @ =0x0600B000
	b _0807616E
_08076030:
	.4byte gRam
_08076034:
	.4byte 0x00000B98
_08076038:
	.4byte 0x000009BE
_0807603C:
	.4byte 0x000009BA
_08076040:
	.4byte gUnknown_02018000
_08076044:
	.4byte 0x0600C000
_08076048:
	.4byte gUnknown_02019000
_0807604C:
	.4byte 0x0600D000
_08076050:
	.4byte gUnknown_02020000
_08076054:
	.4byte 0x0600A000
_08076058:
	.4byte gUnknown_02021000
_0807605C:
	.4byte 0x0600B000
_08076060:
	cmp r0, #1
	bne _080760AC
	ldr r0, _0807608C  @ =gUnknown_0201C000
	ldr r1, _08076090  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076094  @ =gUnknown_02019000
	ldr r1, _08076098  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _0807609C  @ =gUnknown_02024000
	ldr r1, _080760A0  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080760A4  @ =gUnknown_02021000
	ldr r1, _080760A8  @ =0x0600B000
	b _0807616E
_0807608C:
	.4byte gUnknown_0201C000
_08076090:
	.4byte 0x0600C000
_08076094:
	.4byte gUnknown_02019000
_08076098:
	.4byte 0x0600D000
_0807609C:
	.4byte gUnknown_02024000
_080760A0:
	.4byte 0x0600A000
_080760A4:
	.4byte gUnknown_02021000
_080760A8:
	.4byte 0x0600B000
_080760AC:
	ldr r0, _080760D4  @ =gUnknown_0201C000
	ldr r1, _080760D8  @ =0x0600C000
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080760DC  @ =gUnknown_0201D000
	ldr r1, _080760E0  @ =0x0600D000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080760E4  @ =gUnknown_02024000
	ldr r1, _080760E8  @ =0x0600A000
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080760EC  @ =gUnknown_02025000
	ldr r1, _080760F0  @ =0x0600B000
	b _0807616E
_080760D4:
	.4byte gUnknown_0201C000
_080760D8:
	.4byte 0x0600C000
_080760DC:
	.4byte gUnknown_0201D000
_080760E0:
	.4byte 0x0600D000
_080760E4:
	.4byte gUnknown_02024000
_080760E8:
	.4byte 0x0600A000
_080760EC:
	.4byte gUnknown_02025000
_080760F0:
	.4byte 0x0600B000
_080760F4:
	ldrh r0, [r3]
	ldrh r1, [r1]
	ldr r3, _08076128  @ =0xFFFFFF00
	add r0, r0, r3
	cmp r1, r0
	bne _080761C4
	ldr r4, _0807612C  @ =0x000009BA
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _08076144
	ldr r0, _08076130  @ =gUnknown_02018800
	ldr r1, _08076134  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076138  @ =gUnknown_02019800
	ldr r1, _0807613C  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076140  @ =gUnknown_02020800
	b _08076162
	.byte 0x00
	.byte 0x00
_08076128:
	.4byte 0xFFFFFF00
_0807612C:
	.4byte 0x000009BA
_08076130:
	.4byte gUnknown_02018800
_08076134:
	.4byte 0x0600C800
_08076138:
	.4byte gUnknown_02019800
_0807613C:
	.4byte 0x0600D800
_08076140:
	.4byte gUnknown_02020800
_08076144:
	cmp r0, #1
	bne _08076198
	ldr r0, _08076178  @ =gUnknown_0201C800
	ldr r1, _0807617C  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076180  @ =gUnknown_02019800
	ldr r1, _08076184  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076188  @ =gUnknown_02024800
_08076162:
	ldr r1, _0807618C  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _08076190  @ =gUnknown_02021800
	ldr r1, _08076194  @ =0x0600B800
_0807616E:
	add r2, r4, #0
	bl CpuFastSet
	b _080761C4
	.byte 0x00
	.byte 0x00
_08076178:
	.4byte gUnknown_0201C800
_0807617C:
	.4byte 0x0600C800
_08076180:
	.4byte gUnknown_02019800
_08076184:
	.4byte 0x0600D800
_08076188:
	.4byte gUnknown_02024800
_0807618C:
	.4byte 0x0600A800
_08076190:
	.4byte gUnknown_02021800
_08076194:
	.4byte 0x0600B800
_08076198:
	ldr r0, _080761CC  @ =gUnknown_0201C800
	ldr r1, _080761D0  @ =0x0600C800
	mov r4, #128
	lsl r4, r4, #2
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080761D4  @ =gUnknown_0201D800
	ldr r1, _080761D8  @ =0x0600D800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080761DC  @ =gUnknown_02024800
	ldr r1, _080761E0  @ =0x0600A800
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080761E4  @ =gUnknown_02025800
	ldr r1, _080761E8  @ =0x0600B800
	add r2, r4, #0
	bl CpuFastSet
_080761C4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080761CC:
	.4byte gUnknown_0201C800
_080761D0:
	.4byte 0x0600C800
_080761D4:
	.4byte gUnknown_0201D800
_080761D8:
	.4byte 0x0600D800
_080761DC:
	.4byte gUnknown_02024800
_080761E0:
	.4byte 0x0600A800
_080761E4:
	.4byte gUnknown_02025800
_080761E8:
	.4byte 0x0600B800
	THUMB_FUNC_END sub_08075FE8

